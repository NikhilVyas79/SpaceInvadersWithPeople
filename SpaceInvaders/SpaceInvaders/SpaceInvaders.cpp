// SpaceInvaders.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Object.h"
#include "Entity.h"
#include "Alien.h"
#include "MysteryAlien.h"
#include "LaserCannon.h"
#include "Laser.h"
#include "Bunker.h"
#include "Manager.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");

	sf::Texture texture;
	texture.loadFromFile("SpriteSheet.jpg");
	sf::Texture* point = &texture;
	Object obj(texture);
	LaserCannon cannon(point);
	Laser las(point);
	bool lasAlive = false;


	while (window.isOpen())
	{
		if (las.offScreen()) {
			lasAlive = false;
		}
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
				cannon.move(true);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
				cannon.move(false);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
				if (!lasAlive) {
					las.setLasPosition(cannon.getCannonPosition());
					lasAlive = true;
				}
			}
		}
		las.move();
		
		window.clear();
		cannon.display(window);
		if (lasAlive) {
			las.display(window);
		}
		window.display();
	}

	return 0;
}