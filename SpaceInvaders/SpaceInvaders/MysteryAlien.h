#pragma once

#include "Alien.h"

class MysteryAlien : public Alien
{
public:
	MysteryAlien(sf::Texture);
	~MysteryAlien();
	void display();
	void animation();
	void eraseAlien();
private:
	bool alive;
	int team=1;
	sf::RenderWindow window;
};

