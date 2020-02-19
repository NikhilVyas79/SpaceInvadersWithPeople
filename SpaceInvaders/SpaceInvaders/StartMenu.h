#pragma once
#include "DisplayState.h"

class StartMenu : public DisplayState
{
public:
	StartMenu(sf::Texture* t);
	~StartMenu();


	void virtual draw(sf::RenderWindow* target) override;
	void virtual keyHandle() override;
	void virtual eventHandle(sf::Event* e) override;
	int virtual nextState(std::vector<DisplayState*> *d) override;

private:
	sf::Sprite tempMenu;
	std::vector<sf::CircleShape*> shit;
	bool next;
};

