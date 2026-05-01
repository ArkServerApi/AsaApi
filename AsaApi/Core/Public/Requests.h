#pragma once

#include <functional>
#include <vector>
#include <mutex>
#include <windows.h>
#include "API/Base.h"

namespace API
{
	class Requests
	{
	public:
		ARK_API static Requests& Get();

		Requests();
		~Requests();

		Requests(const Requests&) = delete;
		Requests(Requests&&) = delete;
		Requests& operator=(const Requests&) = delete;
		Requests& operator=(Requests&&) = delete;

		struct RequestSyncData {
			bool success;
			int statusCode;
			std::string result;
		};

		/**
		 * \brief Discards all pending HTTP request callbacks owned by the specified plugin module.
		 *
		 * - Must be called before `FreeLibrary` for the plugin.
		 * - No callback registered by this module will be invoked on subsequent ticks.
		 * - Worker threads still in flight for this module are unaffected. Their results
		 *   will be silently discarded when `Update()` finds no matching callback id.
		 * - Thread-safe. Acquires an internal callback registry mutex.
		 * \param pluginModule Handle of the plugin being unloaded.
		 */
		ARK_API void UnregisterCallbacksForModule(HMODULE pluginModule);

		/**
		 * \brief Creates an async GET Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreateGetRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async GET Request that runs in another thread but calls the callback from the main thread, with
		 * timeout options
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreateGetRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an async POST Request with application/x-www-form-urlencoded content type that runs in another
		 * thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool), result(string) and ,
		 * responseHeaders(std::unordered_map<std::string, std::string>), result is error code if request failed and the
		 * response otherwise
		 * \param data to post
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
			const std::string& post_data,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async POST Request with application/x-www-form-urlencoded content type that runs in another
		 * thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool), result(string) and ,
		 * responseHeaders(std::unordered_map<std::string, std::string>), result is error code if request failed and the
		 * response otherwise
		 * \param data to post
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
			const std::string& post_data,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool), result(string) and ,
		 * responseHeaders(std::unordered_map<std::string, std::string>), result is error code if request failed and the
		 * response otherwise
		 * \param data to post
		 * \param content type
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
			const std::string& post_data,
			const std::string& content_type,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool), result(string) and ,
		 * responseHeaders(std::unordered_map<std::string, std::string>), result is error code if request failed and the
		 * response otherwise
		 * \param data to post
		 * \param content type
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
			const std::string& post_data,
			const std::string& content_type,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool), result(string) and ,
		 * responseHeaders(std::unordered_map<std::string, std::string>), result is error code if request failed and the
		 * response otherwise
		 * \param data key
		 * \param data value
		 * \param included headers
		 * \return `true` on dispatch, `false` if data sizes are mismatched or the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
			const std::vector<std::string>& post_ids,
			const std::vector<std::string>& post_data,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool), result(string) and ,
		 * responseHeaders(std::unordered_map<std::string, std::string>), result is error code if request failed and the
		 * response otherwise
		 * \param data key
		 * \param data value
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if data sizes are mismatched or the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string, std::unordered_map<std::string, std::string>)>& callback,
			const std::vector<std::string>& post_ids,
			const std::vector<std::string>& post_data,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an async PATCH Request with application/x-www-form-urlencoded content type that runs in another
		 * thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param data to patch
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePatchRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& patch_data,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async PATCH Request with application/x-www-form-urlencoded content type that runs in another
		 * thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param data to patch
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePatchRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& patch_data,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an async PATCH Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param data to patch
		 * \param content type
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePatchRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& patch_data,
			const std::string& content_type,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async PATCH Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param data to patch
		 * \param content type
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreatePatchRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& patch_data,
			const std::string& content_type,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an async DELETE Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreateDeleteRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async DELETE Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and
		 * the response otherwise
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		ARK_API bool CreateDeleteRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an sync GET Request that should NOT be called from the main game thread to avoid player timeout
		 * issues
		 * \param request URL
		 * \param included headers
		 * \return Populated `RequestSyncData` describing the response.
		 */
		ARK_API RequestSyncData CreateGetRequestSync(const std::string& url,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an sync GET Request that should NOT be called from the main game thread to avoid player timeout
		 * issues
		 * \param request URL
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return Populated `RequestSyncData` describing the response.
		 */
		ARK_API RequestSyncData CreateGetRequestSync(const std::string& url,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Downloads a file from the specified URL to the specified local path, blocking the calling thread until completion.
		 * \param url URL of the file to download
		 * \param localPath Local file path to save the downloaded file to
		 * \param headers Optional HTTP headers to include in the download request
		 * \return `true` if the file was successfully downloaded, `false` otherwise
		 */
		static bool DownloadFile(const std::string& url, const std::string& localPath, std::vector<std::string> headers = {});

		// ! --- DEPRECATED ---
		// NOTE: These functions are deprecated. They are intentionally left in place to maintain backward compatibility 
		// with existing deployed plugins. Do not use in new code. Consider migrating existing usage to the non-deprecated versions.

		/**
		 * \brief Creates an async POST Request with application/x-www-form-urlencoded content type that runs in another thread but calls the callback from the main thread
		 * \deprecated Use the 3-arg callback variant for explicit response-header access.
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data to post
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		[[deprecated("Use the 3-arg callback variant for explicit response-header access")]]
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& post_data,
			std::vector<std::string> headers = {});		

		/**
		 * \brief Creates an async POST Request with application/x-www-form-urlencoded content type that runs in another thread but calls the callback from the main thread
		 * \deprecated Use the 3-arg callback variant for explicit response-header access.
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data to post
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		[[deprecated("Use the 3-arg callback variant for explicit response-header access")]]
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& post_data,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \deprecated Use the 3-arg callback variant for explicit response-header access.
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data to post
		 * \param content type
		 * \param included headers
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		[[deprecated("Use the 3-arg callback variant for explicit response-header access")]]
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& post_data,
			const std::string& content_type,
			std::vector<std::string> headers = {});
			
		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \deprecated Use the 3-arg callback variant for explicit response-header access.
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data to post
		 * \param content type
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if the caller's plugin module could not be resolved.
		 */
		[[deprecated("Use the 3-arg callback variant for explicit response-header access")]]
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& post_data,
			const std::string& content_type,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);			

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \deprecated Use the 3-arg callback variant for explicit response-header access.
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data key
		 * \param data value
		 * \param included headers
		 * \return `true` on dispatch, `false` if data sizes are mismatched or the caller's plugin module could not be resolved.
		 */
		[[deprecated("Use the 3-arg callback variant for explicit response-header access")]]
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::vector<std::string>& post_ids,
			const std::vector<std::string>& post_data,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \deprecated Use the 3-arg callback variant for explicit response-header access.
		 * \param request URL
		 * \param the callback function, binds success(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data key
		 * \param data value
		 * \param included headers
		 * \param included connectionTimeout in seconds (0 = default)
		 * \param included receiveTimeout in seconds (0 = default)
		 * \param included sendTimeout in seconds (0 = default)
		 * \return `true` on dispatch, `false` if data sizes are mismatched or the caller's plugin module could not be resolved.
		 */
		[[deprecated("Use the 3-arg callback variant for explicit response-header access")]]
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::vector<std::string>& post_ids,
			const std::vector<std::string>& post_data,
			std::vector<std::string> headers,
			long connectionTimeout, long receiveTimeout, long sendTimeout);


	private:
		class impl;
		std::unique_ptr<impl> pimpl;
		bool suppress_errors = false;
	};
} // namespace API
