#include "Window.h"

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PSTR	  lpCmdLine,
	int		  CmdShow)
{
	Window wnd(800, 300, "nigga");

	MSG msg;
	BOOL gResult;
	while (gResult = GetMessage(&msg, nullptr, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	if (gResult == -1)
	{
		return -1;
	}

	return msg.wParam;
}