#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

class Object
{
public:
	Object();
	Object(sf::Texture);
	~Object();
	virtual void draw();
	void setTeam();
	int getTeam();
	void collision(Object);

private:
	sf::Texture spriteSheet;
};

