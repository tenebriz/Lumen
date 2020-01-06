#pragma once

#include "lmpch.h"

#include "Lumen/Core.h"
#include "Lumen/Events/Event.h"

namespace Lumen
{
    struct WindowProps
    {
        std::string Title;
        unsigned int Width;
        unsigned int Height;

        WindowProps(const std::string& title = "Lumen Engine",
                    unsigned int width = 1280,
                    unsigned int height = 720)
            : Title(title), Width(width), Height(height)
        {
        }

    };

    class LUMEN_API Window
    {
        using EventCallbackFN = std::function<void(Event&)>;

        virtual ~Window() {}

        
        virtual void OnUpdate() = 0;

        virtual unsigned int GetWidth() const = 0;
        virtual unsigned int GetHeight() const = 0;

        //Window Attributes
        virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
        virtual void SetVSync(bool enabled) = 0;
        virtual bool IsSync() cont = 0;

        static Window* Create(const WindowProp& props = WindowProps());

    };
}
