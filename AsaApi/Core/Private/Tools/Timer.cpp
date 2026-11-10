#include "Timer.h"

#include "../IBaseApi.h"

#include <Timer.h>

#include <algorithm>
#include <iterator>

namespace API
{
	Timer::Timer()
	{
		game_api->GetCommands()->AddOnTimerCallback("API.TimerUpdate", std::bind(&Timer::Update, this));
	}

	Timer::~Timer()
	{
		game_api->GetCommands()->RemoveOnTimerCallback("API.TimerUpdate");
	}

	Timer& Timer::Get()
	{
		static Timer instance;
		return instance;
	}

	void Timer::DelayExecuteInternal(const std::function<void()>& callback, int delay_seconds, const FString& identifier, const FString& moduleName)
	{
		const auto now = Clock::now();
		const auto exec_time = now + std::chrono::seconds(delay_seconds);

		auto timer = std::make_shared<TimerFunc>(exec_time, callback, true, 1, 0, identifier, moduleName);

		std::lock_guard<std::mutex> lock(timers_mutex_);
		timer_funcs_.emplace_back(std::move(timer));
	}

	void Timer::RecurringExecuteInternal(const std::function<void()>& callback, int execution_interval,
		int execution_counter, bool async, const FString& identifier, const FString& moduleName)
	{
		if (async)
		{
			std::thread([callback, execution_interval, execution_counter]()
				{
					if (execution_counter == -1)
					{
						for (;;)
						{
							callback();
							std::this_thread::sleep_for(std::chrono::seconds(execution_interval));
						}
					}

					for (int i = 0; i < execution_counter; ++i)
					{
						callback();
						std::this_thread::sleep_for(std::chrono::seconds(execution_interval));
					}
				}).detach();
		}
		else
		{
			const auto now = Clock::now();
			auto timer = std::make_shared<TimerFunc>(now, callback, false, execution_counter, execution_interval, identifier, moduleName);

			std::lock_guard<std::mutex> lock(timers_mutex_);
			timer_funcs_.emplace_back(std::move(timer));
		}
	}

	void Timer::UnloadTimerInternal(const FString& identifier)
	{
		// The removed entries are destroyed after the lock is released: a callback's captures
		// may themselves call back into the timer from their destructors.
		std::vector<std::shared_ptr<TimerFunc>> removed;
		{
			std::lock_guard<std::mutex> lock(timers_mutex_);

			const auto first_removed = std::stable_partition(timer_funcs_.begin(), timer_funcs_.end(),
				[&](const std::shared_ptr<TimerFunc>& data)
				{
					return !(data && data->identifier.Equals(identifier));
				});

			for (auto it = first_removed; it != timer_funcs_.end(); ++it)
				(*it)->cancelled = true;

			removed.assign(std::make_move_iterator(first_removed), std::make_move_iterator(timer_funcs_.end()));
			timer_funcs_.erase(first_removed, timer_funcs_.end());
		}
	}

	void Timer::UnloadTimersFromModule(const FString& moduleName)
	{
		std::vector<std::shared_ptr<TimerFunc>> removed;
		{
			std::lock_guard<std::mutex> lock(timers_mutex_);

			const auto first_removed = std::stable_partition(timer_funcs_.begin(), timer_funcs_.end(),
				[&](const std::shared_ptr<TimerFunc>& data)
				{
					return !(data && data->moduleName.Equals(moduleName));
				});

			for (auto it = first_removed; it != timer_funcs_.end(); ++it)
				(*it)->cancelled = true;

			removed.assign(std::make_move_iterator(first_removed), std::make_move_iterator(timer_funcs_.end()));
			timer_funcs_.erase(first_removed, timer_funcs_.end());
		}
	}

	void Timer::Update()
	{
		const auto now = Clock::now();

		// The timers due in this pass are collected under the lock and called after it is
		// released, so a callback is free to add or remove timers.
		std::vector<std::shared_ptr<TimerFunc>> due;
		bool any_finished = false;
		{
			std::lock_guard<std::mutex> lock(timers_mutex_);

			if (timer_funcs_.empty())
			{
				return;
			}

			for (const auto& data : timer_funcs_)
			{
				if (data == nullptr || data->finished)
				{
					// Left over from a pass that a throwing callback cut short: remove, never re-run
					any_finished = true;
					continue;
				}

				if (now < data->next_time)
				{
					continue;
				}

				if (data->exec_once)
				{
					data->finished = true;
				}
				else if (data->execution_counter > 0)
				{
					// The last run and the removal now happen in the same pass
					if (--data->execution_counter == 0)
					{
						data->finished = true;
					}

					data->next_time = now + std::chrono::seconds(data->execution_interval);
				}
				else if (data->execution_counter == -1)
				{
					data->next_time = now + std::chrono::seconds(data->execution_interval);
				}
				else
				{
					// No runs left (or an invalid counter): drop it without calling it
					data->finished = true;
					any_finished = true;
					continue;
				}

				any_finished = any_finished || data->finished;
				due.push_back(data);
			}
		}

		for (const auto& data : due)
		{
			// A callback earlier in this pass may have removed this timer
			if (!data->cancelled)
			{
				data->callback();
			}
		}

		if (any_finished)
		{
			// Finished timers stay listed until here so UnloadTimer can still find and cancel them
			// during the pass. They are destroyed after the lock is released.
			std::vector<std::shared_ptr<TimerFunc>> retired;
			{
				std::lock_guard<std::mutex> lock(timers_mutex_);

				const auto first_retired = std::stable_partition(timer_funcs_.begin(), timer_funcs_.end(),
					[](const std::shared_ptr<TimerFunc>& data)
					{
						return data && !data->finished;
					});

				retired.assign(std::make_move_iterator(first_retired), std::make_move_iterator(timer_funcs_.end()));
				timer_funcs_.erase(first_retired, timer_funcs_.end());
			}
		}
	}
} // namespace API
