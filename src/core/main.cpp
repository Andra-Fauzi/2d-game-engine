#include <SFML/Graphics.hpp>
#include <iostream>
#include "../gui/manager.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800,600),"my window");
	window.setFramerateLimit(60);
	Gui::Manager manager(&window);
	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear();
		std::cout << "clear" << std::endl;
		if(manager.Button(sf::Vector2f(100,100),sf::Vector2f(100,100)))
		{
			std::cout << "get click" << std::endl;
		}
		window.display();
	}
	return 0;
}
