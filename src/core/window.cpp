#include "window.hpp"

window::window(const char* title, int width,int height,bool fullscreen,int framelimit)
{
	if(fullscreen == true)
	{
		Window = new sf::RenderWindow(sf::VideoMode(width,height),title,sf::Style::Fullscreen);
	}
	else
	{
		Window = new sf::RenderWindow(sf::VideoMode(width,height),title);
	}
	Window->setFramerateLimit(framelimit);
}

void window::event()
{
	sf::Event event;
	while(Window->pollEvent(event))
	{
		if(event.type == sf::Event::Closed)
		{
			Window->close();
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			Window->close();
		}
	}
}

void window::clear()
{
	Window->clear();
}

void window::draw()
{
}

void window::display()
{
	Window->display();
}

bool window::isOpen()
{
	return Window->isOpen();
}

window::~window()
{
	std::cout << "window deleted" << std::endl;
	delete Window;
}