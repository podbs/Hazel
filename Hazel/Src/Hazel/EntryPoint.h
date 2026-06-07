#pragma once

#include "Hazel/Application.h"

#include <stdio.h>

#ifdef HAZEL_PLATFORM_WINDOWS


extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** agrv)
{
	printf("Hello Hazel\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HAZEL_PLATFORM_WINDOWS
