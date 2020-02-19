#pragma once

#include "Entity.h"

class Laser : public Entity
{
public:
	Laser();
	Laser(sf::Texture*, sf::Vector2f);
	~Laser();
	bool checkForCollision();
	void display(sf::RenderWindow &);
	void move();

private:
	bool alive;
	int team;
	sf::Sprite las;
};

