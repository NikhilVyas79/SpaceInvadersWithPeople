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

int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");

	sf::Texture texture;
	texture.loadFromFile("SpriteSheet.jpg");
	sf::Texture* point = &texture;
	std::vector<Laser*> canLas;
	int x = 0;
	Object obj(texture);
	LaserCannon cannon(point);


	while (window.isOpen())
	{
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
					canLas.push_back(new Laser(point, cannon.getCannonPosition()));
			}
		}
		
		window.clear();
		cannon.display(window);
		for (int i = 0; i < canLas.size(); i++) {
			canLas.at(i)->display(window);
			canLas.at(i)->move();
		}
		window.display();
	}

	return 0;
}