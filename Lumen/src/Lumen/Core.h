#pragma once

#ifdef LM_PLATFORM_LINUX
    #ifdef LM_BUILD_DLL
        #define LUMEN_API  
    #else
        #define LUMEN_API  
    #endif
#else
    #error Lumen only supports linux
#endif

#define BIT(x) (1 << x)