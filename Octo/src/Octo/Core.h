#pragma once

#ifdef OT_PLATFORM_WINDOWS
	#ifdef OT_BUILD_DLL
		#define OCTO_API __declspec(dllexport)
	#else
		#define OCTO_API __declspec(dllimport)
	#endif
#else
	#error Octo only supports Windows!
#endif