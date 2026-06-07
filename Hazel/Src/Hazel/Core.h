#pragma once

#ifdef HAZEL_PLATFORM_WINDOWS // USE FOR WIM PLATFORM
#ifdef HAZEL_BUILD_DLL
	#define HAZEL_API __declspec(dllexport)
#else
	#define HAZEL_API __declspec(dllimport)
#endif // HAZEL_BUILD_DLL
#else
#error "Only Windows is supported!"
#endif // _WIN
