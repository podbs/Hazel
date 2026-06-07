#pragma once


#ifdef HAZEL_PLATFORM_WINDOWS


extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** agrv)
{
	Hazel::Log::Init();
	//Hazel::Log::GetClientLogger()->warn("Hello");
	int a = 0;
	HZ_CORE_ERROR("Error {0}", a);
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HAZEL_PLATFORM_WINDOWS
