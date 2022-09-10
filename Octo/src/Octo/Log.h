#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Octo {
	class OCTO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger>	s_ClientLogger;
	};

}

// Core log marcos
#define OT_CORE_TRACE(...)   ::Octo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define OT_CORE_INFO(...)    ::Octo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define OT_CORE_WARN(...)    ::Octo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define OT_CORE_ERROR(...)   ::Octo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define OT_CORE_FATAL(...)   ::Octo::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log marcos
#define OT_TRACE(...)		 ::Octo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define OT_INFO(...)		 ::Octo::Log::GetClientLogger()->info(__VA_ARGS__)
#define OT_WARN(...)		 ::Octo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define OT_ERROR(...)		 ::Octo::Log::GetClientLogger()->error(__VA_ARGS__)
#define OT_FATAL(...)		 ::Octo::Log::GetClientLogger()->fatal(__VA_ARGS__)
