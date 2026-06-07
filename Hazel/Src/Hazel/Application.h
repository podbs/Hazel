#pragma once
#include "Core.h"

namespace Hazel
{
	// Application will be responsible for running the game loop and managing the windows and events.
	class HAZEL_API Application
	{
	public:
		Application()
		{

		}
		virtual ~Application()
		{

		}
		void Run();
	};
	Application* CreateApplication();
}

