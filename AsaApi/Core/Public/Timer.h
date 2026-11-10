#pragma once

#include <atomic>
#include <chrono>
#include <functional>
#include <memory>
#include <mutex>
#include <vector>

#include "API/ARK/Ark.h"

namespace API
{
	class Timer
	{
	public:
		ARK_API static Timer& Get();

		Timer(const Timer&) = delete;
		Timer(Timer&&) = delete;
		Timer& operator=(const Timer&) = delete;
		Timer& operator=(Timer&&) = delete;

		/**
		 * \brief Executes function after X seconds
		 * \tparam Func Callback function type
		 * \tparam Args Callback arguments types
		 * \param callback Callback function
		 * \param delay Delay in seconds
		 * \param args Callback arguments
		 */
		template <typename Func, typename... Args>
		void DelayExecute(const Func& callback, int delay, Args&&... args)
		{
			DelayExecuteInternal(std::bind(callback, std::forward<Args>(args)...), delay, FString::Format(L"{}_{}", *GetDllName(), FMath::RandRange(0, INT_MAX)), GetDllName());
		}

		/**
		 * \brief Executes function after X seconds
		 * \param identifier Unique identifier for the delay execute
		 * \tparam Func Callback function type
		 * \tparam Args Callback arguments types
		 * \param callback Callback function
		 * \param delay Delay in seconds
		 * \param args Callback arguments
		 */
		template <typename Func, typename... Args>
		void DelayExecute(const FString& identifier, const Func& callback, int delay, Args&&... args)
		{
			DelayExecuteInternal(std::bind(callback, std::forward<Args>(args)...), delay, identifier, GetDllName());
		}

		/**
		 * \brief Executes function every X seconds
		 * \tparam Func Callback function type
		 * \tparam Args Callback arguments types
		 * \param callback Callback function
		 * \param execution_interval Delay between executions in seconds
		 * \param execution_counter Amount of times to execute function, -1 for unlimited
		 * \param async If true, function will be executed in the new thread
		 * \param args Callback arguments
		 */
		template <typename Func, typename... Args>
		void RecurringExecute(const Func& callback, int execution_interval,
			int execution_counter, bool async, Args&&... args)
		{
			const FString moduleName = GetDllName();
			RecurringExecuteInternal(std::bind(callback, std::forward<Args>(args)...), execution_interval,
				execution_counter, async, FString::Format(L"{}_{}", *moduleName, FMath::RandRange(0, INT_MAX)), moduleName);
		}
		
		/**
		 * \brief Executes function every X seconds
		 * \param identifier Unique identifier for the delay execute
		 * \tparam Func Callback function type
		 * \tparam Args Callback arguments types
		 * \param callback Callback function
		 * \param execution_interval Delay between executions in seconds
		 * \param execution_counter Amount of times to execute function, -1 for unlimited
		 * \param async If true, function will be executed in the new thread
		 * \param args Callback arguments
		 */
		template <typename Func, typename... Args>
		void RecurringExecute(const FString& identifier, const Func& callback, int execution_interval,
			int execution_counter, bool async, Args&&... args)
		{
			RecurringExecuteInternal(std::bind(callback, std::forward<Args>(args)...), execution_interval,
				execution_counter, async, identifier, GetDllName());
		}

		/**
		* \brief Unloads timer by identifier
		* \param identifier Unique identifier for the timer, either a delay execute or a recurring execute
		*/
		void UnloadTimer(const FString& identifier)
		{
			UnloadTimerInternal(identifier);
		}

		/**
		* \brief Unloads all timers from the caller plugin
		*/
		void UnloadAllTimers()
		{
			UnloadTimersFromModule(GetDllName());
		}

	private:
		friend class PluginManager;

		// Monotonic, so a system clock correction neither stalls nor bursts the timers
		using Clock = std::chrono::steady_clock;

		struct TimerFunc
		{
			TimerFunc(const Clock::time_point& next_time,
				std::function<void()> callback,
				bool exec_once, int execution_counter, int execution_interval,
				FString identifier, FString moduleName)
				: next_time(next_time),
				callback(move(callback)),
				exec_once(exec_once),
				execution_counter(execution_counter),
				execution_interval(execution_interval),
				identifier(identifier),
				moduleName(moduleName)
			{
			}

			FString identifier;
			FString moduleName;
			Clock::time_point next_time;
			std::function<void()> callback;
			bool exec_once;
			int execution_counter;
			int execution_interval;

			// Set by UnloadTimer / UnloadAllTimers. Update() checks it right before the call,
			// so a timer removed earlier in the same pass does not fire.
			std::atomic<bool> cancelled{ false };
			// Ran for the last time, to be dropped from timer_funcs_. Guarded by timers_mutex_.
			bool finished = false;
		};

		Timer();
		~Timer();

		ARK_API void DelayExecuteInternal(const std::function<void()>& callback, int delay_seconds, const FString& identifier = "", const FString& moduleName = "");
		ARK_API void RecurringExecuteInternal(const std::function<void()>& callback, int execution_interval,
			int execution_counter, bool async, const FString& identifier, const FString& moduleName);
		ARK_API void UnloadTimerInternal(const FString& identifier);
		ARK_API void UnloadTimersFromModule(const FString& moduleName);

		void Update();

		// Guards timer_funcs_: timers may be added or removed from threads other than the game thread.
		// Never held while a callback runs or while a TimerFunc is destroyed.
		std::mutex timers_mutex_;
		std::vector<std::shared_ptr<TimerFunc>> timer_funcs_;
	};
} // namespace API