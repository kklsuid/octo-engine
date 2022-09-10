#pragma once

#ifdef OT_PLATFORM_WINDOWS

extern Octo::Application* Octo::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Octo::CreateApplication();
	app->Run();
	delete app;
}
#endif