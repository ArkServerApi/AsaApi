#pragma once
#define WIN32_LEAN_AND_MEAN
#pragma warning(push)
#pragma warning(disable: 4191)
#pragma warning(disable : 4996)
#include <Requests.h>

#include "../IBaseApi.h"

#include <sstream>

#include <mutex>

#include "json.hpp"

#include "fstream"
#include "Poco/StreamCopier.h"
#include "Poco/URI.h"
#include "Poco/Exception.h"
#include "Poco/SharedPtr.h"
#include "Poco/Net/SSLManager.h"
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
#include "../Ark/ArkBaseApi.h"
#include <variant>

namespace API
{
	class Requests::impl
	{
	public:
		void WriteRequest(std::function<void(bool, std::string)> callback, bool success, std::string result);
		void WriteRequest(std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)> callback, bool success, std::string result, std::unordered_map<std::string, std::string> headers);

		Poco::Net::HTTPRequest ConstructRequest(const std::string& url, Poco::Net::HTTPClientSession*& session,
			const std::vector<std::string>& headers, const std::string& request_type, long connectionTimeout, long receiveTimeout, long sendTimeout);

		std::string GetResponse(Poco::Net::HTTPClientSession* session, Poco::Net::HTTPResponse& response);
		std::unordered_map<std::string, std::string> GetResponseHeaders(Poco::Net::HTTPResponse& response);

		void Update();
	private:
		using CallbackVariant = std::variant<
			std::function<void(bool, std::string)>,
			std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>
		>;
		struct RequestData
		{
			CallbackVariant callback;
			bool success;
			std::string result;
			std::unordered_map<std::string, std::string> headers = std::unordered_map<std::string, std::string>();
		};

		std::vector<RequestData> RequestsVec_;
		std::mutex RequestMutex_;
	};

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

	void Requests::impl::WriteRequest(std::function<void(bool, std::string)> callback, bool success, std::string result)
	{
		std::lock_guard<std::mutex> Guard(RequestMutex_);
		RequestsVec_.push_back({ callback, success, result });
	}

	void Requests::impl::WriteRequest(std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)> callback, bool success, std::string result, std::unordered_map<std::string, std::string> headers)
	{
		std::lock_guard<std::mutex> Guard(RequestMutex_);
		RequestsVec_.push_back({ callback, success, result, headers });
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
		if (connectionTimeout > 0L)
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

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		std::vector<std::string> headers)
	{
		return CreateGetRequest(url, callback, headers, 0L, 0L, 0L);
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_GET, connectionTimeout, receiveTimeout, sendTimeout);

					session->sendRequest(request);
					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	[[deprecated]]
	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& post_data, std::vector<std::string> headers)
	{
		return CreatePostRequest(url, callback, post_data, headers, 0L, 0L, 0L);
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::string& post_data, std::vector<std::string> headers)
	{
		return CreatePostRequest(url, callback, post_data, headers, 0L, 0L, 0L);
	}

	[[deprecated]]
	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, post_data, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, connectionTimeout, receiveTimeout, sendTimeout);

					request.setContentType("application/x-www-form-urlencoded");
					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::string& post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, post_data, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				std::unordered_map<std::string, std::string> responseHeaders;
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, connectionTimeout, receiveTimeout, sendTimeout);

					request.setContentType("application/x-www-form-urlencoded");
					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					Result = pimpl->GetResponse(session, response);
					responseHeaders = pimpl->GetResponseHeaders(response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result, responseHeaders);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	[[deprecated]]
	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback, const std::string& post_data, const std::string& content_type, std::vector<std::string> headers)
	{
		return CreatePostRequest(url, callback, post_data, content_type, headers, 0L, 0L, 0L);
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback, const std::string& post_data, const std::string& content_type, std::vector<std::string> headers)
	{
		return CreatePostRequest(url, callback, post_data, content_type, headers, 0L, 0L, 0L);
	}

	[[deprecated]]
	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& post_data, const std::string& content_type, std::vector<std::string> headers,
		long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, post_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, connectionTimeout, receiveTimeout, sendTimeout);

					request.setContentType(content_type);
					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::string& post_data, const std::string& content_type, std::vector<std::string> headers,
		long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, post_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				std::unordered_map<std::string, std::string> responseHeaders;
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, connectionTimeout, receiveTimeout, sendTimeout);

					request.setContentType(content_type);
					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					Result = pimpl->GetResponse(session, response);
					responseHeaders = pimpl->GetResponseHeaders(response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result, responseHeaders);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	[[deprecated]]
	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::vector<std::string>& post_ids,
		const std::vector<std::string>& post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		if (post_ids.size() != post_data.size())
			return false;

		std::thread([this, url, callback, post_ids, post_data, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, connectionTimeout, receiveTimeout, sendTimeout);

					std::string body;

					for (size_t i = 0; i < post_ids.size(); ++i)
					{
						const std::string& id = post_ids[i];
						const std::string& data = post_data[i];

						body += fmt::format("{}={}&", Poco::UTF8::escape(id), Poco::UTF8::escape(data));
					}

					body.pop_back(); // Remove last '&'

					request.setContentType("application/x-www-form-urlencoded");
					request.setContentLength(body.size());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << body;

					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::vector<std::string>& post_ids,
		const std::vector<std::string>& post_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		if (post_ids.size() != post_data.size())
			return false;

		std::thread([this, url, callback, post_ids, post_data, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				std::unordered_map<std::string, std::string> responseHeaders;
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST, connectionTimeout, receiveTimeout, sendTimeout);

					std::string body;

					for (size_t i = 0; i < post_ids.size(); ++i)
					{
						const std::string& id = post_ids[i];
						const std::string& data = post_data[i];

						body += fmt::format("{}={}&", Poco::UTF8::escape(id), Poco::UTF8::escape(data));
					}

					body.pop_back(); // Remove last '&'

					request.setContentType("application/x-www-form-urlencoded");
					request.setContentLength(body.size());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << body;

					Result = pimpl->GetResponse(session, response);
					responseHeaders = pimpl->GetResponseHeaders(response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result, responseHeaders);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	[[deprecated]]
	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::vector<std::string>& post_ids,
		const std::vector<std::string>& post_data, std::vector<std::string> headers)
	{
		return CreatePostRequest(url, callback, post_ids, post_data, headers, 0L, 0L, 0L);
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
		const std::vector<std::string>& post_ids,
		const std::vector<std::string>& post_data, std::vector<std::string> headers)
	{
		return CreatePostRequest(url, callback, post_ids, post_data, headers, 0L, 0L, 0L);
	}

	bool Requests::CreatePatchRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& patch_data, std::vector<std::string> headers)
	{
		return CreatePatchRequest(url, callback, patch_data, headers, 0L, 0L, 0L);
	}

	bool Requests::CreatePatchRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& patch_data, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, patch_data, headers, connectionTimeout, receiveTimeout, sendTimeout]
		{
			std::string Result = "";
			Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
			Poco::Net::HTTPClientSession* session = nullptr;

			try
			{
				Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_PATCH, connectionTimeout, receiveTimeout, sendTimeout);

				request.setContentType("application/x-www-form-urlencoded");
				request.setContentLength(patch_data.length());

				std::ostream& OutputStream = session->sendRequest(request);
				OutputStream << patch_data;

				Result = pimpl->GetResponse(session, response);
			}
			catch (const Poco::Exception& exc)
			{
				if (!suppress_errors)
					Log::GetLog()->error(exc.displayText());
			}

			const bool success = (int)response.getStatus() >= 200
				&& (int)response.getStatus() < 300;

			pimpl->WriteRequest(callback, success, Result);
			delete session;
			session = nullptr;
		}
		).detach();

		return true;
	}

	bool Requests::CreatePatchRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& patch_data, const std::string& content_type, std::vector<std::string> headers)
	{
		return CreatePatchRequest(url, callback, patch_data, content_type, headers, 0L, 0L, 0L);
	}

	bool Requests::CreatePatchRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& patch_data, const std::string& content_type, std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, patch_data, content_type, headers, connectionTimeout, receiveTimeout, sendTimeout]
		{
			std::string Result = "";
			Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
			Poco::Net::HTTPClientSession* session = nullptr;

			try
			{
				Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_PATCH, connectionTimeout, receiveTimeout, sendTimeout);

				request.setContentType(content_type);
				request.setContentLength(patch_data.length());

				std::ostream& OutputStream = session->sendRequest(request);
				OutputStream << patch_data;

				Result = pimpl->GetResponse(session, response);
			}
			catch (const Poco::Exception& exc)
			{
				if (!suppress_errors)
					Log::GetLog()->error(exc.displayText());
			}

			const bool success = (int)response.getStatus() >= 200
				&& (int)response.getStatus() < 300;

			pimpl->WriteRequest(callback, success, Result);
			delete session;
			session = nullptr;
		}
		).detach();

		return true;
	}

	bool Requests::CreateDeleteRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		std::vector<std::string> headers)
	{
		return CreateDeleteRequest(url, callback, headers, 0L, 0L, 0L);
	}

	bool Requests::CreateDeleteRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		std::vector<std::string> headers, long connectionTimeout, long receiveTimeout, long sendTimeout)
	{
		std::thread([this, url, callback, headers, connectionTimeout, receiveTimeout, sendTimeout]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest&& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_DELETE, connectionTimeout, receiveTimeout, sendTimeout);

					session->sendRequest(request);
					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					if (!suppress_errors)
						Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
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
				Log::GetLog()->error(exc.displayText());
		}

		Result.statusCode = (int)response.getStatus();
		Result.success = (int)response.getStatus() >= 200
			&& (int)response.getStatus() < 300;

		delete session;
		session = nullptr;

		return Result;
	}

	bool Requests::DownloadFile(const std::string& url, const std::string& localPath, std::vector<std::string> headers)
	{
		Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
		Poco::Net::HTTPClientSession* session = nullptr;

		try
		{
			Poco::Net::initializeSSL();
			Poco::SharedPtr<Poco::Net::InvalidCertificateHandler> ptrCert = new Poco::Net::RejectCertificateHandler(false);

			Poco::Net::Context::Ptr ptrContext = new Poco::Net::Context(Poco::Net::Context::TLS_CLIENT_USE, "", "", "", Poco::Net::Context::VERIFY_NONE, 9, false, "ALL:!ADH:!LOW:!EXP:!MD5:@STRENGTH");

			Poco::Net::SSLManager::instance().initializeClient(0, ptrCert, ptrContext);

			Poco::URI uri(url);

			const std::string& path(uri.getPathAndQuery());

			if (uri.getScheme() == "https")
				session = new Poco::Net::HTTPSClientSession(uri.getHost(), uri.getPort());
			else
				session = new Poco::Net::HTTPClientSession(uri.getHost(), uri.getPort());

			Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_GET, path, Poco::Net::HTTPMessage::HTTP_1_1);

			session->sendRequest(request);
			std::istream& rs = session->receiveResponse(response);
			if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
			{
				std::ofstream outFile(localPath, std::ios::binary);
				if (!outFile)
				{
					Log::GetLog()->error("Writing the file '{}' failed", localPath);
					delete session;
					session = nullptr;
					return false;
				}

				Poco::StreamCopier::copyStream(rs, outFile);
			}
			else
			{
				Poco::NullOutputStream null;
				Poco::StreamCopier::copyStream(rs, null);
				delete session;
				session = nullptr;
				return false;
			}
		}
		catch (const Poco::Exception& exc)
		{
			Log::GetLog()->error(exc.displayText());

			delete session;
			session = nullptr;
			return false;
		}

		delete session;
		session = nullptr;
		return true;
	}

    void Requests::impl::Update()
    {
        if (RequestsVec_.empty())
            return;

        RequestMutex_.lock();
        std::vector<RequestData> requests_temp = std::move(RequestsVec_);
        RequestMutex_.unlock();

        for (const auto& request : requests_temp)
		{
            std::visit([&](auto&& callback) 
			{
                using T = std::decay_t<decltype(callback)>;
                if constexpr (std::is_same_v<T, std::function<void(bool, std::string)>>)
                    callback(request.success, request.result);
                else if constexpr (std::is_same_v<T, std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>>)
                    callback(request.success, request.result, request.headers);
            }, request.callback);
        }
    }
} // namespace API