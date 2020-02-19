#pragma once

#include "Object.h"

class Entity : public Object
{
public:
	Entity();
	Entity(sf::Texture);
	~Entity();
	virtual void move();
	bool isAlive();
private:
	sf::RenderWindow window;
};

