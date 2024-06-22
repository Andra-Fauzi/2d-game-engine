#pragma once
#include <SFML/Graphics.hpp>

namespace Gui {
	class Manager{
		public:
		Manager(sf::RenderWindow* window);
		bool Button(sf::Vector2f position, sf::Vector2f size);
		sf::RenderWindow* window;
	};
}
