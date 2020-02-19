#include "StartMenu.h"
#include <iostream>
StartMenu::StartMenu(sf::Texture* t)
{
	this->setTexture(t);
	tempMenu.setTexture(*spriteSheet);
	tempMenu.setScale(sf::Vector2f(2, 2));
	next = false;
	setName("start");
}

StartMenu::~StartMenu()
{
}

void StartMenu::draw(sf::RenderWindow* target)
{
	target->draw(tempMenu);
}

void StartMenu::keyHandle()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		tempMenu.rotate(1);
	}


}

void StartMenu::eventHandle(sf::Event* e)
{
	if (e->type == sf::Event::KeyPressed)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
			next = true;
	}
}

int StartMenu::nextState(std::vector<DisplayState*> *d)
{
	int nextboi = -1;
	if (next == true)
	{
		findState(d, "game");
	}
	return nextboi;
}
