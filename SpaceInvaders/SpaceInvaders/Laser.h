#pragma once

#include "Entity.h"

class Laser : public Entity
{
public:
	Laser();
	Laser(sf::Texture*);
	~Laser();
	bool checkForCollision();
	void display(sf::RenderWindow &);
	void move();
	bool offScreen();
	void setLasPosition(sf::Vector2f);
private:
	int team;
	sf::Sprite las;
};

