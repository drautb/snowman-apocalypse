#include <iostream>

#include "cs455Utils.h"
#include "Window.h"

int main(int argc, char *argv[])
{
	Window *window = new Window();

	if (window->Open())
		window->EnterMainLoop();
	else
	{
		SAFE_DELETE(window);
		return -1;
	}

	SAFE_DELETE(window);

	return 0;
}
