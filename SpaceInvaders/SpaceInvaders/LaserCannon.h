#pragma once

#include "Entity.h"

class LaserCannon : public Entity
{
public:
	LaserCannon(sf::Texture *);
	~LaserCannon();
	void move(bool);
	void display(sf::RenderWindow &);
	sf::Vector2f getCannonPosition();
private:
	bool alive;
	int team=2;
	sf::Sprite t;
};

