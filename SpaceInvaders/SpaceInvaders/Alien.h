#pragma once

#include "Entity.h"

class Alien : public Entity
{
public:
	Alien();
	~Alien();
	void display();
	void animation();
	void eraseAlien();
	void spawnBomb();
	void move();

private:
	bool alive;
	int team=1;
};

