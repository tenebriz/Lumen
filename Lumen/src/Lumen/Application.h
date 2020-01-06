#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Lumen
{
    class LUMEN_API Application
    {
    public:
        Application();
        virtual ~Application();  

        void Run();  
    };

    // To be defined in a client
    Application* CreateApplication();
}