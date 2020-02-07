#pragma once

#include "Object.h"

class Entity : public Object
{
public:
	Entity();
	~Entity();
	virtual void move();
	bool isAlive();
private:
};

