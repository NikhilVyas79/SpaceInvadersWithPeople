#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <SFML/Graphics.hpp>
#include "DisplayState.h"

class StateManager
{
public:
	StateManager();
	StateManager(sf::Vector2f windowSize, std::string windowName);
	~StateManager();

	void init(DisplayState *d, sf::Texture*);
	void addState(DisplayState *d);
	bool selectState(int index);

private:
	sf::Texture* spriteSheet;
	std::vector<DisplayState*> states;
	sf::RenderWindow *window;
	int currentState;
	sf::Clock clock;
};

#endif // !STATEMANAGER_H