#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Lumen
{
    class LUMEN_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;}
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;}
    private:

    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}


// Core log macros
#define LM_CORE_TRACE(...)    ::Lumen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LM_CORE_INFO(...)     ::Lumen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LM_CORE_WARN(...)     ::Lumen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LM_CORE_ERROR(...)    ::Lumen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LM_CORE_FATAL(...)    ::Lumen::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define LM_TRACE(...)    ::Lumen::Log::GetClientLogger()->error(__VA_ARGS__)
#define LM_INFO(...)     ::Lumen::Log::GetClientLogger()->info(__VA_ARGS__)
#define LM_WARN(...)     ::Lumen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LM_ERROR(...)    ::Lumen::Log::GetClientLogger()->error(__VA_ARGS__)
#define LM_FATAL(...)    ::Lumen::Log::GetClientLogger()->fatal(__VA_ARGS__)