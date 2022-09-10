#pragma once

#ifdef OT_PLATFORM_WINDOWS

extern Octo::Application* Octo::CreateApplication();

int main(int argc, char** argv)
{
	Octo::Log::Init();
	OT_CORE_WARN("Initialized Log!");
	int a = 5;
	OT_INFO("Hello, Octo! Var={0}", a);

	auto app = Octo::CreateApplication();
	app->Run();
	delete app;
}
#endif