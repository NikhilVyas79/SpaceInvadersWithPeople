#pragma once

#include "Entity.h"

class LaserCannon : public Entity
{
public:
	LaserCannon();
	~LaserCannon();
	void move();
	bool checkForShoot();
	void display();

private:
	bool alive;
	int team=2;
};

