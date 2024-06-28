#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class window {
public:
	window(const char* title, int width,int height,bool fullscreen=false,int framelimit=60);
	void event();
	void clear();
	void draw();
	void display();
	bool isOpen();
	~window();
	sf::RenderWindow *Window = NULL;
};