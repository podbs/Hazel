#include "Application.h"
#include"Events/ApplicationEvent.h"
#include"Hazel/Log.h"

namespace Hazel {
	void Application::Run()
	{
		WindowResizeEvent e(1280, 960);
		HZ_TRACE(e.ToString());
		while (true)
		{

		}
	}
}
