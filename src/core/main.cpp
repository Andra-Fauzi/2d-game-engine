#include <iostream>
#include "window.hpp"

int main()
{
	window Window("my window",800,600);
	while(Window.isOpen())
	{
		Window.event();
		Window.clear();
		Window.draw();
		Window.display();
	}
	return 0;
}
