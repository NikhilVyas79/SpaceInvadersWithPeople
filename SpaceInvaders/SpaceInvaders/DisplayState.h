#ifndef DISPLAYSTATE_H
#define DISPLAYSTATE_H

#include <SFML/Graphics.hpp>

class DisplayState
{
public:
	DisplayState();
	DisplayState(sf::Texture* t);
	~DisplayState();

	void virtual eventHandle(sf::Event* e);
	void virtual keyHandle();
	void virtual draw(sf::RenderWindow* target);
	void virtual update();
	void virtual fixedUpdate(sf::Clock clock);
	int virtual nextState(std::vector<DisplayState*> *d);

	void setName(std::string name);
	void setWindow(sf::Vector2f w);
	std::string getName();
	void setTexture(sf::Texture* t);
	int findState(std::vector<DisplayState*>* d, std::string name);

protected:
	std::string stateName;
	sf::Vector2f windowSize;
	sf::Texture *spriteSheet;
};

#endif // !DISPLAYSTATE_H