#pragma once

#include "Entity.h"

class Laser : public Entity
{
public:
	Laser(int);
	~Laser();
	bool checkForCollision();
	void display();
	void move();

private:
	bool alive;
	int team;
};

