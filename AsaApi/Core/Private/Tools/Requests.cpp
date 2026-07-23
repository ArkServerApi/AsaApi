#define WIN32_LEAN_AND_MEAN
#pragma warning(push)
#pragma warning(disable: 4191)
#pragma warning(disable : 4996)

#include <Requests.h>
#include "../IBaseApi.h"
#include "../Ark/ArkBaseApi.h"

#include <array>
#include <atomic>
#include <chrono>
#include <exception>
#include <fstream>
#include <intrin.h>
#include <memory>
#include <mutex>
#include <optional>
#include <sstream>
#include <thread>
#include <unordered_map>
#include <variant>
#include <wincrypt.h>

#include <openssl/err.h>
#include <openssl/ssl.h>
#include <openssl/x509.h>

#include "json.hpp"

#include "Poco/StreamCopier.h"
#include "Poco/URI.h"
#include "Poco/Exception.h"
#include "Poco/SharedPtr.h"
#include "Poco/String.h"
#include "Poco/Net/SSLManager.h"
#include "Poco/Net/NetSSL.h"
#include <Poco/Net/InvalidCertificateHandler.h>
#include <Poco/Net/RejectCertificateHandler.h>
#include "Poco/Net/HTTPSClientSession.h"
#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTTPResponse.h"
#include <Poco/Path.h>
#include <Poco/UTF8String.h>
#include <Poco/NullStream.h>
#include "Poco/Net/Context.h"
#include "Poco/Net/PrivateKeyPassphraseHandler.h"
#include "Poco/Net/HTTPSClientSession.h"
#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTTPResponse.h"
#include "Poco/Timespan.h"

namespace API
{
	namespace {
		constexpr std::size_t MaxUtilityRedirects = 5;

		std::size_t AddWindowsRootStoreToContext(SSL_CTX* sslContext, DWORD storeLocation)
		{
			HCERTSTORE certificateStore = CertOpenStore(
				CERT_STORE_PROV_SYSTEM_W,
				0,
				0,
				storeLocation | CERT_STORE_OPEN_EXISTING_FLAG | CERT_STORE_READONLY_FLAG,
				L"ROOT");
			if (certificateStore == nullptr)
				return 0;

			X509_STORE* opensslStore = SSL_CTX_get_cert_store(sslContext);
			std::size_t certificatesAdded = 0;
			PCCERT_CONTEXT certificate = nullptr;
			while ((certificate = CertEnumCertificatesInStore(certificateStore, certificate)) != nullptr)
			{
				const unsigned char* encodedCertificate = certificate->pbCertEncoded;
				X509* opensslCertificate = d2i_X509(
					nullptr, &encodedCertificate, static_cast<long>(certificate->cbCertEncoded));
				if (opensslCertificate == nullptr)
				{
					ERR_clear_error();
					continue;
				}

				if (X509_STORE_add_cert(opensslStore, opensslCertificate) == 1)
					++certificatesAdded;
				else
					ERR_clear_error(); // Duplicate roots are expected across Windows stores.
				X509_free(opensslCertificate);
			}

			CertCloseStore(certificateStore, 0);
			return certificatesAdded;
		}

		void LoadWindowsTrustedRoots(SSL_CTX* sslContext)
		{
			const std::size_t rootsLoaded =
				AddWindowsRootStoreToContext(sslContext, CERT_SYSTEM_STORE_LOCAL_MACHINE)
				+ AddWindowsRootStoreToContext(sslContext, CERT_SYSTEM_STORE_CURRENT_USER);
			if (rootsLoaded == 0)
				throw std::runtime_error("Unable to load trusted certificates from the Windows ROOT stores");
		}

		class SSLRuntime final
		{
		public:
			SSLRuntime()
			{
				Poco::Net::initializeSSL();
			}

			~SSLRuntime()
			{
				Poco::Net::uninitializeSSL();
			}

			SSLRuntime(const SSLRuntime&) = delete;
			SSLRuntime& operator=(const SSLRuntime&) = delete;
		};

		class VerifiedTLSContext final
		{
		public:
			VerifiedTLSContext()
			{
				Poco::Net::Context::Params params;
				params.verificationMode = Poco::Net::Context::VERIFY_STRICT;
				params.loadDefaultCAs = false;

				context_ = new Poco::Net::Context(Poco::Net::Context::TLS_CLIENT_USE, params);
				LoadWindowsTrustedRoots(context_->sslContext());
				Poco::SharedPtr<Poco::Net::InvalidCertificateHandler> certificateHandler =
					new Poco::Net::RejectCertificateHandler(false);
				context_->setInvalidCertificateHandler(certificateHandler);
			}

			Poco::Net::Context::Ptr GetContext() const
			{
				return context_;
			}

			VerifiedTLSContext(const VerifiedTLSContext&) = delete;
			VerifiedTLSContext& operator=(const VerifiedTLSContext&) = delete;

		private:
			// Members are destroyed in reverse order, so the context is released before SSL is uninitialized.
			SSLRuntime sslRuntime_;
			Poco::Net::Context::Ptr context_;
		};

		Poco::Net::Context::Ptr GetVerifiedTLSContext()
		{
			static VerifiedTLSContext verifiedContext;
			return verifiedContext.GetContext();
		}

		bool IsHTTPS(const Poco::URI& uri)
		{
			return Poco::icompare(uri.getScheme(), "https") == 0;
		}

		bool IsSupportedHTTPURI(const Poco::URI& uri)
		{
			return !uri.getHost().empty()
				&& (IsHTTPS(uri) || Poco::icompare(uri.getScheme(), "http") == 0);
		}

		bool IsRedirectStatus(Poco::Net::HTTPResponse::HTTPStatus status)
		{
			return status == Poco::Net::HTTPResponse::HTTP_MOVED_PERMANENTLY
				|| status == Poco::Net::HTTPResponse::HTTP_FOUND
				|| status == Poco::Net::HTTPResponse::HTTP_SEE_OTHER
				|| status == Poco::Net::HTTPResponse::HTTP_TEMPORARY_REDIRECT
				|| status == Poco::Net::HTTPResponse::HTTP_PERMANENT_REDIRECT;
		}

		bool IsSameOrigin(const Poco::URI& lhs, const Poco::URI& rhs)
		{
			return Poco::icompare(lhs.getScheme(), rhs.getScheme()) == 0
				&& Poco::icompare(lhs.getHost(), rhs.getHost()) == 0
				&& lhs.getPort() == rhs.getPort();
		}

		bool IsSensitiveHeader(const std::string& name)
		{
			return Poco::icompare(name, "Authorization") == 0
				|| Poco::icompare(name, "Proxy-Authorization") == 0
				|| Poco::icompare(name, "Cookie") == 0
				|| Poco::icompare(name, "Cookie2") == 0
				|| Poco::icompare(name, "Host") == 0;
		}

		void AddRequestHeaders(Poco::Net::HTTPRequest& request, const std::vector<std::string>& headers,
			bool allowSensitiveHeaders)
		{
			for (const auto& header : headers)
			{
				const auto separator = header.find(':');
				if (separator == std::string::npos || separator == 0)
					continue;

				const std::string name = Poco::trim(header.substr(0, separator));
				if (name.empty() || (!allowSensitiveHeaders && IsSensitiveHeader(name)))
					continue;

				request.add(name, Poco::trim(header.substr(separator + 1)));
			}
		}

		std::unique_ptr<Poco::Net::HTTPClientSession> CreateUtilitySession(const Poco::URI& uri)
		{
			std::unique_ptr<Poco::Net::HTTPClientSession> session;
			if (IsHTTPS(uri))
			{
				session = std::make_unique<Poco::Net::HTTPSClientSession>(
					uri.getHost(), uri.getPort(), GetVerifiedTLSContext());
			}
			else
			{
				session = std::make_unique<Poco::Net::HTTPClientSession>(uri.getHost(), uri.getPort());
			}

			session->setConnectTimeout(Poco::Timespan(15, 0));
			session->setReceiveTimeout(Poco::Timespan(60, 0));
			session->setSendTimeout(Poco::Timespan(15, 0));
			return session;
		}

		std::string GetRequestTarget(const Poco::URI& uri)
		{
			const std::string target = uri.getPathAndQuery();
			return target.empty() ? "/" : target;
		}

		bool ResolveRedirect(const Poco::URI& currentUri, const std::string& location, Poco::URI& nextUri)
		{
			if (location.empty())
				return false;

			nextUri = currentUri;
			nextUri.resolve(location);

			if (!IsSupportedHTTPURI(nextUri))
				return false;

			// Never allow a secure request to be downgraded by a redirect.
			return !IsHTTPS(currentUri) || IsHTTPS(nextUri);
		}

		std::optional<HMODULE> TryGetModuleHandleFromAddress(void *address) 
		{
    		HMODULE HModule = nullptr;
			
			if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | 	GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)address, &HModule))
			{
        		return HModule;
			}

			MEMORY_BASIC_INFORMATION mbi{};
			if (VirtualQuery(address, &mbi, sizeof(mbi)) == sizeof(mbi)
				&& mbi.State == MEM_COMMIT
				&& mbi.AllocationBase != nullptr)
			{
				return reinterpret_cast<HMODULE>(mbi.AllocationBase);
			}

    		return std::nullopt;
		}

		std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)> DeprecatedCallbackAdapter(std::function<void(bool, std::string)> callback2Args)
		{
			auto callback3Args = [cb = std::move(callback2Args)](bool success, std::string result, std::unordered_map<std::string, std::string> /* Unused response headers */){
				cb(success, std::move(result));				
			};

			return callback3Args;
		}		

		using CallbackVariant = std::variant<std::function<void(bool, std::string)>, std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>>;
	}  // namespace
	
	class Requests::impl
	{
		public:
		uint64_t RegisterCallback(CallbackVariant callback, HMODULE callingPlugin);
    	void EnqueueResult(std::string result, std::unordered_map<std::string, std::string> headers, uint64_t id, bool success);
    	void EnqueueResult(std::string result, uint64_t id, bool success);
		void UnregisterCallbacksForModule(HMODULE pluginModule);
		
    	bool LaunchGet(const std::string& url, const std::function<void(bool, std::string)>& callback, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule);
    	bool LaunchPost(const std::string &url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)> &callback, const std::string &post_data, const std::string &content_type, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule);
    	bool LaunchPostForm(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback, const std::vector<std::string>& post_ids, const std::vector<std::string>& post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule);
    	bool LaunchPatch(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &patch_data, const std::string &content_type, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule);
    	bool LaunchDelete(const std::string &url, const std::function<void(bool, std::string)> &callback, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule);
		
		Poco::Net::HTTPRequest ConstructRequest(const std::string& url, Poco::Net::HTTPClientSession*& session, const std::vector<std::string>& headers, const std::string& request_type, long connectionTimeout, long receiveTimeout, long sendTimeout);
		std::string GetResponse(Poco::Net::HTTPClientSession* session, Poco::Net::HTTPResponse& response); std::unordered_map<std::string, std::string> GetResponseHeaders(Poco::Net::HTTPResponse& response);
		void LogRequestError(const std::string& url, const Poco::Exception& exc);
			
		void Update();
		private:
		struct RequestData {
			bool success;
			std::string result;
			std::unordered_map<std::string, std::string> headers = std::unordered_map<std::string, std::string>();
			uint64_t callbackId;
		};

		struct CallbackEntry {
			CallbackVariant callback;
		    HMODULE pluginModule;
		};
	

    	std::unordered_map<uint64_t, CallbackEntry> CallbacksMap_;
		std::vector<RequestData> RequestsVec_;
		std::mutex RequestMutex_;
		std::mutex CallbackMutex_;
    	std::atomic<uint64_t> NextId_{1}; // 0 is an internal sentinel
	};

	// --- PIMPL ---

	Requests::Requests()
		: pimpl{ std::make_unique<impl>() }
	{
		const nlohmann::json config = dynamic_cast<ArkBaseApi&>(*game_api).GetConfig();
		suppress_errors = config.value("SuppressHttpErrors", false);

		Poco::Net::initializeSSL();
		Poco::SharedPtr<Poco::Net::InvalidCertificateHandler> ptrCert = new Poco::Net::RejectCertificateHandler(false);

		Poco::Net::Context::Ptr ptrContext = new Poco::Net::Context(Poco::Net::Context::TLS_CLIENT_USE, "", "", "", Poco::Net::Context::VERIFY_NONE, 9, false, "ALL:!ADH:!LOW:!EXP:!MD5:@STRENGTH");

		Poco::Net::SSLManager::instance().initializeClient(0, ptrCert, ptrContext);

		game_api->GetCommands()->AddOnTickCallback("RequestsUpdate", std::bind(&impl::Update, this->pimpl.get()));
	}

	Requests::~Requests()
	{
		Poco::Net::uninitializeSSL();
		game_api->GetCommands()->RemoveOnTickCallback("RequestsUpdate");
	}

	Requests& Requests::Get()
	{
		static Requests instance;
		return instance;
	}

	void Requests::impl::LogRequestError(const std::string& url, const Poco::Exception& exc)
	{
		std::string host;
		try
		{
			host = Poco::URI(url).getHost();
		}
		catch (...)
		{
			host = "<unknown host>";
		}

		Log::GetLog()->error("HTTP request to '{}' failed: {}", host, exc.displayText());
	}

	Poco::Net::HTTPRequest Requests::impl::ConstructRequest(const std::string& url, Poco::Net::HTTPClientSession*& session,
		const std::vector<std::string>& headers, const std::string& request_type, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		Poco::URI uri(url);

		const std::string& path(uri.getPathAndQuery());

		if (uri.getScheme() == "https")
			session = new Poco::Net::HTTPSClientSession(uri.getHost(), uri.getPort());
		else
			session = new Poco::Net::HTTPClientSession(uri.getHost(), uri.getPort());

		if (connectionTimeout > 0L)
			session->setConnectTimeout(Poco::Timespan(connectionTimeout, 0L));
		if (receiveTimeout > 0L)
			session->setReceiveTimeout(Poco::Timespan(receiveTimeout, 0L));
		if (sendTimeout > 0L)
			session->setSendTimeout(Poco::Timespan(sendTimeout, 0L));

		Poco::Net::HTTPRequest request(request_type, path, Poco::Net::HTTPMessage::HTTP_1_1);

		if (!headers.empty())
		{
			for (const auto& header : headers)
			{
				const std::string& key = header.substr(0, header.find(":"));
				const std::string& data = header.substr(header.find(":") + 1);

				request.add(key, data);
			}
		}

		return request;
	}

	std::string Requests::impl::GetResponse(Poco::Net::HTTPClientSession* session, Poco::Net::HTTPResponse& response)
	{
		std::string result = "";
		std::istream& rs = session->receiveResponse(response);

		if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
		{
			std::ostringstream oss;
			Poco::StreamCopier::copyStream(rs, oss);
			result = oss.str();
		}
		else
		{
			Poco::NullOutputStream null;
			Poco::StreamCopier::copyStream(rs, null);
			result = std::to_string(response.getStatus()) + " " + response.getReason();
		}

		return result;
	}

	std::unordered_map<std::string, std::string> Requests::impl::GetResponseHeaders(Poco::Net::HTTPResponse& response)
	{
		std::unordered_map<std::string, std::string> headers;

		for (auto it = response.begin(); it != response.end(); ++it)
		{
			headers[it->first] = it->second;
		}

		return headers;
	}

	void Requests::impl::EnqueueResult(std::string result, uint64_t callbackId, bool success) 
	{
		std::lock_guard<std::mutex> Guard(RequestMutex_);
	    RequestsVec_.push_back({success, std::move(result), {}, callbackId});
	}

	void Requests::impl::EnqueueResult(std::string result, std::unordered_map<std::string, std::string> headers, uint64_t callbackId, bool success) 
	{
		std::lock_guard<std::mutex> Guard(RequestMutex_);
		RequestsVec_.push_back({success, std::move(result), std::move(headers), callbackId});
	}

	uint64_t Requests::impl::RegisterCallback(CallbackVariant callback, HMODULE pluginModule)
	{
		std::lock_guard<std::mutex> Guard(CallbackMutex_);
		const uint64_t callbackId = NextId_.fetch_add(1);
		CallbacksMap_.emplace(callbackId, CallbackEntry{std::move(callback), pluginModule});
		return callbackId;
	}

    void Requests::impl::UnregisterCallbacksForModule(HMODULE pluginModule)
	{
		std::lock_guard<std::mutex> Guard(CallbackMutex_);
        size_t removed = std::erase_if(CallbacksMap_, [pluginModule](const auto& entry) {
			return entry.second.pluginModule == pluginModule;
        });

		if (removed > 0) {
			Log::GetLog()->debug("Drained {} pending HTTP request callbacks.", removed);
		}
	}

	void Requests::UnregisterCallbacksForModule(HMODULE pluginModule)
	{
	    pimpl->UnregisterCallbacksForModule(pluginModule);
	}

    // --- GET REQUESTS ---

    bool Requests::impl::LaunchGet(const std::string& url, const std::function<void(bool, std::string)>& callback, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule)
	{
		const uint64_t callbackId = RegisterCallback(callback, pluginModule);

    	std::thread([this, url, headers, connectionTimeout, receiveTimeout, sendTimeout, suppressErrors, callbackId] {
    	    std::string Result = "";
    	    Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
    	    Poco::Net::HTTPClientSession *session = nullptr;

    	    try {
    	        Poco::Net::HTTPRequest &&request =
    	            ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_GET, 	connectionTimeout, receiveTimeout, sendTimeout);

    	        session->sendRequest(request);
    	        Result = GetResponse(session, response);
    	    } catch (const Poco::Exception &exc) {
    	        if (!suppressErrors) LogRequestError(url, exc);
    	    }

    	    const bool success = (int)response.getStatus() >= 200 && (int)response.getStatus() < 300;

    	    EnqueueResult(std::move(Result), callbackId, success);
    	    delete session;
    	    session = nullptr;
    	}).detach();

		return true;
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback, std::vector<std::string> headers)
	{
		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
	    if (!HModuleOpt) {
	        Log::GetLog()->error(
	            "Failed to get module handle for caller of CreateGetRequest. Request cancelled. Error code: {}", GetLastError());
	        return false;
	    }

		return pimpl->LaunchGet(url, callback, headers, 0, 0, 0, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
	    if (!HModuleOpt) {
	        Log::GetLog()->error(
	            "Failed to get module handle for caller of CreateGetRequest. Request cancelled. Error code: {}", GetLastError());
	        return false;
	    }

		return pimpl->LaunchGet(url, callback, headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);
	}

	Requests::RequestSyncData Requests::CreateGetRequestSync(const std::string& url,
		std::vector<std::string> headers)
	{
		return CreateGetRequestSync(url, headers, 0L, 0L, 0L);
	}

	Requests::RequestSyncData Requests::CreateGetRequestSync(const std::string& url,
		std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		Requests::RequestSyncData Result;
		Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
		Poco::Net::HTTPClientSession* session = nullptr;

		try
		{
			Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_GET, connectionTimeout, receiveTimeout, sendTimeout);

			session->sendRequest(request);
			Result.result = pimpl->GetResponse(session, response);
		}
		catch (const Poco::Exception& exc)
		{
			if (!suppress_errors)
				pimpl->LogRequestError(url, exc);
		}

		Result.statusCode = (int)response.getStatus();
		Result.success = (int)response.getStatus() >= 200
			&& (int)response.getStatus() < 300;

		delete session;
		session = nullptr;

		return Result;
	}

	// --- POST REQUESTS ---

	bool Requests::impl::LaunchPost(const std::string &url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)> &callback, const std::string &post_data, const std::string &content_type, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule) 
	{
		const uint64_t callbackId = RegisterCallback(callback, pluginModule);

    	std::thread(
    	    [this, url, post_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout, 	suppressErrors, callbackId] {
    	    std::string Result = "";
    	    std::unordered_map<std::string, std::string> responseHeaders;
    	    Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
    	    Poco::Net::HTTPClientSession *session = nullptr;

    		try {
    		    Poco::Net::HTTPRequest &&request =
    		        ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, 	connectionTimeout, receiveTimeout, sendTimeout);
					
    		    request.setContentType(content_type);
    		    request.setContentLength(post_data.length());
					
    		    std::ostream & OutputStream = session->sendRequest(request);
    		    OutputStream << post_data;
					
    		    Result          = GetResponse(session, response);
    		    responseHeaders = GetResponseHeaders(response);
    		} catch (const Poco::Exception &exc) {
    		    if (!suppressErrors) LogRequestError(url, exc);
    		}
		
    		const bool success = (int)response.getStatus() >= 200 && (int)response.getStatus() < 300;
		
    		EnqueueResult(std::move(Result), std::move(responseHeaders), callbackId, success);
    		delete session;
    		session = nullptr;
    	}).detach();

		return true;
	}

	bool Requests::impl::LaunchPostForm(const std::string &url, const std::function<void(bool,std::string, std::unordered_map<std::string, std::string>)> &callback, const std::vector<std::string> &post_ids, const std::vector<std::string> &post_data,std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout,bool suppressErrors, HMODULE pluginModule) 
	{
		const uint64_t callbackId = RegisterCallback(callback, pluginModule);

		std::thread([this, url, post_ids, post_data, headers, connectionTimeout, receiveTimeout, sendTimeout, suppressErrors, callbackId] {
				std::string Result = "";
				std::unordered_map<std::string, std::string> responseHeaders;
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, connectionTimeout, receiveTimeout, sendTimeout);

					std::string body = "";

					for (size_t i = 0; i < post_ids.size(); ++i)
					{
						const std::string& id = post_ids[i];
						const std::string& data = post_data[i];

						body += fmt::format("{}={}&", Poco::UTF8::escape(id), Poco::UTF8::escape(data));
					}

					if (!body.empty()) {
						body.pop_back(); // Remove last '&'
					}

					request.setContentType("application/x-www-form-urlencoded");
					request.setContentLength(body.size());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << body;

					Result = GetResponse(session, response);
					responseHeaders = GetResponseHeaders(response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppressErrors)
						LogRequestError(url, exc);
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				EnqueueResult(std::move(Result), std::move(responseHeaders), callbackId, success);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::string& post_data, std::vector<std::string> headers)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPost(url, callback, post_data, "application/x-www-form-urlencoded", headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback, const std::string& post_data, const std::string& content_type, std::vector<std::string> headers)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPost(url, callback, post_data, content_type, headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::string& post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPost(url, callback, post_data, "application/x-www-form-urlencoded", headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::string& post_data, const std::string& content_type, std::vector<std::string> headers,
		long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPost(url, callback, post_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);
	}
	
	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::vector<std::string>& post_ids,
		const std::vector<std::string>& post_data, std::vector<std::string> headers)
	{
		if (post_ids.size() != post_data.size()) {
			Log::GetLog()->error( "Mismatched post_ids and post_data sizes in CreatePostRequest. Request cancelled.");
			return false;
		}

        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPostForm(url, callback, post_ids, post_data, headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);	
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::vector<std::string>& post_ids,
		const std::vector<std::string>& post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		if (post_ids.size() != post_data.size()) {
			Log::GetLog()->error( "Mismatched post_ids and post_data sizes in CreatePostRequest. Request cancelled.");
			return false;
		}

        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPostForm(url, callback, post_ids, post_data, headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);	
	}

	// --- PATCH REQUESTS ---

	bool Requests::impl::LaunchPatch(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &patch_data, const std::string &content_type, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule) {
		const uint64_t callbackId = RegisterCallback(callback, pluginModule);

	    std::thread([this, url, patch_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout, suppressErrors, callbackId] {
	        std::string Result = "";
	        Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
	        Poco::Net::HTTPClientSession *session = nullptr;

	        try {
	            Poco::Net::HTTPRequest &&request =
	                ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_PATCH, 	connectionTimeout,
	                                        receiveTimeout, sendTimeout);

	            request.setContentType(content_type);
	            request.setContentLength(patch_data.length());

	            std::ostream &OutputStream = session->sendRequest(request);
	            OutputStream << patch_data;

	            Result = GetResponse(session, response);
	        } catch (const Poco::Exception &exc) {
	            if (!suppressErrors) LogRequestError(url, exc);
	        }

	        const bool success = (int)response.getStatus() >= 200 && (int)response.getStatus() < 300;

	        EnqueueResult(std::move(Result), callbackId, success);
	        delete session;
	        session = nullptr;
	    }).detach();

		return true;
	}
	
	bool Requests::CreatePatchRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &patch_data, std::vector<std::string> headers)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePatchRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPatch(url, callback, patch_data, "application/x-www-form-urlencoded", headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);	
	}

	bool Requests::CreatePatchRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &patch_data, const std::string &content_type, std::vector<std::string> headers)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePatchRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPatch(url, callback, patch_data, content_type, headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);	
	}

	bool Requests::CreatePatchRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &patch_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePatchRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPatch(url, callback, patch_data, "application/x-www-form-urlencoded", headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);	
	}

	bool Requests::CreatePatchRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &patch_data, const std::string &content_type, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreatePatchRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchPatch(url, callback, patch_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);	
	}

	// --- DELETE REQUESTS ---

	bool Requests::impl::LaunchDelete(const std::string &url, const std::function<void(bool, std::string)> &callback, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout, bool suppressErrors, HMODULE pluginModule)
	{
		const uint64_t callbackId = RegisterCallback(callback, pluginModule);

	    std::thread([this, url, headers, connectionTimeout, receiveTimeout, sendTimeout, suppressErrors, callbackId] {
	        std::string Result = "";
	        Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
	        Poco::Net::HTTPClientSession *session = nullptr;

	        try {
	            Poco::Net::HTTPRequest &&request =
	                ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_DELETE, connectionTimeout, receiveTimeout, sendTimeout);

	            session->sendRequest(request);
	            Result = GetResponse(session, response);
	        } catch (const Poco::Exception &exc) {
	            if (!suppressErrors) LogRequestError(url, exc);
	        }

	        const bool success = (int)response.getStatus() >= 200 && (int)response.getStatus() < 300;

	        EnqueueResult(std::move(Result), callbackId, success);
	        delete session;
	        session = nullptr;
	    }).detach();		

		return true;
	}

	bool Requests::CreateDeleteRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, std::vector<std::string> headers)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreateDeleteRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchDelete(url, callback, headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);	
	}

	bool Requests::CreateDeleteRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
        auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of CreateDeleteRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		return pimpl->LaunchDelete(url, callback, headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);	
	}

	// ! --- DEPRECATED ---

	bool Requests::CreatePostRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &post_data, std::vector<std::string> headers)
	{
		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of deprecated CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		auto adaptedCallback = DeprecatedCallbackAdapter(callback);

		return pimpl->LaunchPost(url, adaptedCallback, post_data, "application/x-www-form-urlencoded", headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreatePostRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of deprecated CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		auto adaptedCallback = DeprecatedCallbackAdapter(callback);

		return pimpl->LaunchPost(url, adaptedCallback, post_data, "application/x-www-form-urlencoded", headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreatePostRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &post_data, const std::string &content_type, std::vector<std::string> headers)
	{
		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of deprecated CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		auto adaptedCallback = DeprecatedCallbackAdapter(callback);

		return pimpl->LaunchPost(url, adaptedCallback, post_data, content_type, headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);
	}
			
	bool Requests::CreatePostRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::string &post_data, const std::string &content_type, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of deprecated CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		auto adaptedCallback = DeprecatedCallbackAdapter(callback);

		return pimpl->LaunchPost(url, adaptedCallback, post_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreatePostRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::vector<std::string> &post_ids, const std::vector<std::string> &post_data, std::vector<std::string> headers)
	{
		if (post_ids.size() != post_data.size()) {
			Log::GetLog()->error( "Mismatched post_ids and post_data sizes in CreatePostRequest. Request cancelled.");
			return false;
		}
		
		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of deprecated CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		auto adaptedCallback = DeprecatedCallbackAdapter(callback);

		return pimpl->LaunchPostForm(url, adaptedCallback, post_ids, post_data, headers, 0L, 0L, 0L, suppress_errors, *HModuleOpt);
	}

	bool Requests::CreatePostRequest(const std::string &url, const std::function<void(bool, std::string)> &callback, const std::vector<std::string> &post_ids, const std::vector<std::string> &post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		if (post_ids.size() != post_data.size()) {
			Log::GetLog()->error( "Mismatched post_ids and post_data sizes in CreatePostRequest. Request cancelled.");
			return false;
		}

		auto HModuleOpt = TryGetModuleHandleFromAddress(_ReturnAddress());
        if (!HModuleOpt) {
            Log::GetLog()->error( "Failed to get module handle for caller of deprecated CreatePostRequest. Request cancelled. Error code: {}", GetLastError());
            return false;
        }

		auto adaptedCallback = DeprecatedCallbackAdapter(callback);

		return pimpl->LaunchPostForm(url, adaptedCallback, post_ids, post_data, headers, connectionTimeout, receiveTimeout, sendTimeout, suppress_errors, *HModuleOpt);
	}

	// --- UTILITY ---

	bool Requests::GetFileLastModified(const std::string& url, std::string& lastModified)
	{
		lastModified.clear();

		try
		{
			Poco::URI currentUri(url);
			if (!IsSupportedHTTPURI(currentUri))
			{
				Log::GetLog()->error("HTTP HEAD request rejected an unsupported or invalid URL");
				return false;
			}

			const auto requestDeadline = std::chrono::steady_clock::now() + std::chrono::minutes(1);
			for (std::size_t redirectCount = 0;; ++redirectCount)
			{
				if (std::chrono::steady_clock::now() >= requestDeadline)
				{
					throw Poco::TimeoutException("HTTP HEAD request exceeded the time limit");
				}

				auto session = CreateUtilitySession(currentUri);
				session->setConnectTimeout(Poco::Timespan(15, 0));
				session->setReceiveTimeout(Poco::Timespan(15, 0));
				Poco::Net::HTTPRequest request(
					Poco::Net::HTTPRequest::HTTP_HEAD, GetRequestTarget(currentUri), Poco::Net::HTTPMessage::HTTP_1_1);
				session->sendRequest(request);

				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				std::istream& responseStream = session->receiveResponse(response);

				if (IsRedirectStatus(response.getStatus()))
				{
					if (redirectCount >= MaxUtilityRedirects || !response.has("Location"))
					{
						Log::GetLog()->error("HTTP HEAD request to '{}' exceeded the redirect limit or omitted Location",
							currentUri.getHost());
						return false;
					}

					Poco::URI nextUri;
					if (!ResolveRedirect(currentUri, response.get("Location"), nextUri))
					{
						Log::GetLog()->error("HTTP HEAD request to '{}' received an unsafe redirect", currentUri.getHost());
						return false;
					}

					currentUri = nextUri;
					continue;
				}

				if (response.getStatus() < 200 || response.getStatus() >= 300 || !response.has("Last-Modified"))
					return false;

				lastModified = response.get("Last-Modified");
				return true;
			}
		}
		catch (const Poco::Exception&)
		{
			throw;
		}
		catch (const std::exception& exc)
		{
			Log::GetLog()->error("HTTP HEAD request failed: {}", exc.what());
			return false;
		}
	}

	bool Requests::DownloadFile(
		const std::string& url,
		const std::string& localPath,
		std::vector<std::string> headers)
	{
		return DownloadFile(url, localPath, std::move(headers), 0);
	}

	bool Requests::DownloadFile(
		const std::string& url,
		const std::string& localPath,
		std::vector<std::string> headers,
		std::uint64_t maximumBytes)
	{
		std::string ignoredLastModified;
		return DownloadFile(url, localPath, std::move(headers), maximumBytes, ignoredLastModified);
	}

	bool Requests::DownloadFile(
		const std::string& url,
		const std::string& localPath,
		std::vector<std::string> headers,
		std::uint64_t maximumBytes,
		std::string& lastModified)
	{
		lastModified.clear();

		try
		{
			Poco::URI currentUri(url);
			if (!IsSupportedHTTPURI(currentUri))
			{
				Log::GetLog()->error("HTTP download rejected an unsupported or invalid URL");
				return false;
			}

			bool allowSensitiveHeaders = true;
			const auto downloadDeadline = std::chrono::steady_clock::now() + std::chrono::minutes(10);
			for (std::size_t redirectCount = 0;; ++redirectCount)
			{
				if (std::chrono::steady_clock::now() >= downloadDeadline)
					throw Poco::TimeoutException("HTTP download exceeded the time limit");

				auto session = CreateUtilitySession(currentUri);
				Poco::Net::HTTPRequest request(
					Poco::Net::HTTPRequest::HTTP_GET, GetRequestTarget(currentUri), Poco::Net::HTTPMessage::HTTP_1_1);
				AddRequestHeaders(request, headers, allowSensitiveHeaders);
				session->sendRequest(request);

				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				std::istream& responseStream = session->receiveResponse(response);

				if (IsRedirectStatus(response.getStatus()))
				{
					if (redirectCount >= MaxUtilityRedirects || !response.has("Location"))
					{
						Log::GetLog()->error("HTTP download from '{}' exceeded the redirect limit or omitted Location",
							currentUri.getHost());
						return false;
					}

					Poco::URI nextUri;
					if (!ResolveRedirect(currentUri, response.get("Location"), nextUri))
					{
						Log::GetLog()->error("HTTP download from '{}' received an unsafe redirect", currentUri.getHost());
						return false;
					}

					if (!IsSameOrigin(currentUri, nextUri))
						allowSensitiveHeaders = false;

					currentUri = nextUri;
					continue;
				}

				if (response.getStatus() != Poco::Net::HTTPResponse::HTTP_OK)
					return false;
				const std::string responseLastModified = response.has("Last-Modified")
					? response.get("Last-Modified")
					: std::string{};

				const Poco::Int64 contentLength = response.getContentLength64();
				if (maximumBytes > 0 && contentLength >= 0
					&& static_cast<std::uint64_t>(contentLength) > maximumBytes)
				{
					Log::GetLog()->error("HTTP download from '{}' exceeds the configured size limit", currentUri.getHost());
					return false;
				}

				std::ofstream outFile(localPath, std::ios::binary | std::ios::trunc);
				if (!outFile)
				{
					Log::GetLog()->error("Writing the file '{}' failed", localPath);
					return false;
				}

				std::array<char, 64 * 1024> copyBuffer{};
				std::uint64_t bytesWritten = 0;
				while (responseStream)
				{
					if (std::chrono::steady_clock::now() >= downloadDeadline)
					{
						throw Poco::TimeoutException("HTTP download exceeded the time limit");
					}

					const int firstByte = responseStream.get();
					if (firstByte == std::char_traits<char>::eof())
						break;
					if (std::chrono::steady_clock::now() >= downloadDeadline)
						throw Poco::TimeoutException("HTTP download exceeded the time limit");

					copyBuffer[0] = static_cast<char>(firstByte);
					std::streamsize bytesRead = 1;
					const std::streamsize bufferedBytes = responseStream.rdbuf()->in_avail();
					if (bufferedBytes > 0)
					{
						const std::streamsize maximumAdditionalBytes =
							static_cast<std::streamsize>(copyBuffer.size() - 1);
						const std::streamsize additionalBytes =
							bufferedBytes < maximumAdditionalBytes ? bufferedBytes : maximumAdditionalBytes;
						responseStream.read(copyBuffer.data() + 1, additionalBytes);
						bytesRead += responseStream.gcount();
					}

					const std::uint64_t chunkSize = static_cast<std::uint64_t>(bytesRead);
					if (maximumBytes > 0 && (bytesWritten > maximumBytes || chunkSize > maximumBytes - bytesWritten))
					{
						Log::GetLog()->error("HTTP download from '{}' exceeded the configured size limit", currentUri.getHost());
						return false;
					}

					outFile.write(copyBuffer.data(), bytesRead);
					if (!outFile)
						return false;
					bytesWritten += chunkSize;
				}

				if (responseStream.bad())
					return false;
				if (contentLength >= 0 && bytesWritten != static_cast<std::uint64_t>(contentLength))
				{
					Log::GetLog()->error("HTTP download from '{}' ended before Content-Length bytes were received",
						currentUri.getHost());
					return false;
				}
				outFile.close();
				if (!outFile)
				{
					Log::GetLog()->error("Writing the file '{}' failed", localPath);
					return false;
				}

				lastModified = responseLastModified;
				return true;
			}
		}
		catch (const Poco::Exception&)
		{
			throw;
		}
		catch (const std::exception& exc)
		{
			Log::GetLog()->error("HTTP download failed: {}", exc.what());
			return false;
		}
	}

	void Requests::impl::Update() {
		std::vector<RequestData> requests_temp;
		{
			std::lock_guard<std::mutex> lock(RequestMutex_);
			if (RequestsVec_.empty()) {
				return;
			}
			requests_temp = std::move(RequestsVec_);
		}
		
		for (auto& request : requests_temp) {
			if (request.callbackId == 0) {
				Log::GetLog()->critical("Received HTTP response with invalid callback ID 0. This is not supposed to happen. Report this to a maintainer. The response will be discarded and the callback will not be invoked.");
				continue;
			}
			
			CallbackVariant callback;
			{
				std::lock_guard<std::mutex> lock(CallbackMutex_);
				auto it = CallbacksMap_.find(request.callbackId);
				
				if (it == CallbacksMap_.end()) {
					Log::GetLog()->debug("Received HTTP response for unknown request ID {}. This likely means the owning plugin was unloaded before the response was received. The callback will not be invoked.", request.callbackId);
					continue;
				}
			
				callback = std::move(it->second.callback);
				CallbacksMap_.erase(it);
			}
			
			// Safe to invoke unlocked: `PluginManager::UnloadPlugin` runs on the game thread, same as Update().
			// Caveat: self-unload from inside a callback is unsupported.
			std::visit([&](auto&& cb) {
				using T = std::decay_t<decltype(cb)>;
				
				if constexpr (std::is_same_v<T, std::function<void(bool, std::string)>>){
					cb(request.success, std::move(request.result));
				} else if constexpr (std::is_same_v<T, std::function<void(bool, std::string,std::unordered_map<std::string, std::string>)>>) {
					cb(request.success, std::move(request.result), std::move(request.headers));
				}
				
			}, callback); 
		}
	}

} // namespace API
