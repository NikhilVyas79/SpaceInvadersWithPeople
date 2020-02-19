#pragma once

#include "Object.h"

class Bunker : public Object
{
public:
	Bunker(sf::Texture);
	~Bunker();
	void eraseBasedOnHit();
	void display();

private:
	int team = 0;
	sf::RenderWindow window;
};

