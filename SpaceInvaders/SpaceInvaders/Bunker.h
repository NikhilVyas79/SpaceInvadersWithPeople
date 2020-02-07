#pragma once

#include "Object.h"

class Bunker : public Object
{
public:
	Bunker();
	~Bunker();
	void eraseBasedOnHit();
	void display();

private:
	int team = 0;
};

