#include "StateManager.h"


//Sets up the state manager
//Default window size = (600, 800), Default window name = "SFML!"
StateManager::StateManager()
{
	window = new sf::RenderWindow(sf::VideoMode(600, 800), "SFML");
	currentState = 0;

}


//Sets up the state manager with a custom name and size 
//
StateManager::StateManager(sf::Vector2f windowSize, std::string windowName)
{
	window = new sf::RenderWindow(sf::VideoMode(windowSize.x, windowSize.y), windowName);
	currentState = 0;
}


//Deletes any dynamic variables or objects
//
StateManager::~StateManager()
{
	delete window;
	for (int i = 0; i < states.size(); i++)
		delete states.at(i);
}


//Starts the state manager used to handle all states.
//Draws and handles events. 
void StateManager::init(DisplayState* d, sf::Texture* t)
{
	spriteSheet = t;
	this->addState(d);

	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
			states.at(currentState)->eventHandle(&event);
		}

		states.at(currentState)->keyHandle();
		states.at(currentState)->update();

		window->clear();

		states.at(currentState)->draw(window);

		window->display();

		this->selectState(states.at(currentState)->nextState(&states));
		states.at(currentState)->fixedUpdate(clock);


	}
}


//Adds a state to last position in the vector
//
void StateManager::addState(DisplayState* d)
{
	states.resize(states.size() + 1);
	states.at(states.size() - 1) = d;
	d->setWindow(sf::Vector2f(window->getSize().x, window->getSize().y));
	
	//system("pause");
}


//Sets the focused state to the indexed state 
//Returns false if the state does not exist 
bool StateManager::selectState(int i)
{
	bool isThere = false;
	if (i >= 0)
	{
		if (i < states.size())
		{
			isThere = true;
			currentState = i;
		}
	}
	return isThere;
}
