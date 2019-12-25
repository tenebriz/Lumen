#pragma once

#ifdef LM_PLATFORM_LINUX

extern Lumen::Application* Lumen::CreateApplication();

int main(int argc, char** argv)
{
    Lumen::Log::Init();
    LM_CORE_WARN("Initialized Log!");
    int a = 5;
    LM_INFO("Hello! Var={0}", a);

    auto app = Lumen::CreateApplication();
    app->Run();
    delete app;
}

#endif