#include "manager.hpp"
#include <iostream>

using namespace Gui;

bool Manager::Button(sf::Vector2f position, sf::Vector2f size)
{
	sf::RectangleShape rectangle(size);
	rectangle.setPosition(position);
	sf::Vector2i mouse = sf::Mouse::getPosition(*window);
	window->draw(rectangle);
	if(mouse.x > position.x && mouse.x < position.x+size.x && mouse.y > position.y && mouse.y < position.y+size.y)
	{
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			return true;
		}
	}
	return false;
}
