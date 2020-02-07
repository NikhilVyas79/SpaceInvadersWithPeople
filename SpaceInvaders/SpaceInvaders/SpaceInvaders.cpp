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
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
	//The file is 212 X 152
	//Alien(1,1) is at (0,0,60,50)
	sf::Texture texture;
	texture.loadFromFile("SpriteSheet.jpg", sf::IntRect(0,0,60, 50));
	sf::Sprite sprite;
	sprite.setTexture(texture);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(sprite);
		window.display();
	}

	return 0;
}