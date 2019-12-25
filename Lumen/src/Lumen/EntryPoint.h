#pragma once

#ifdef LM_PLATFORM_LINUX

extern Lumen::Application* Lumen::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Lumen::CreateApplication();
    app->Run();
    delete app;
}

#endif