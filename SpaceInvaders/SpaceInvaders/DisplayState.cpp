#include "DisplayState.h"


DisplayState::DisplayState()
{
}

//Used to init everything in display state.
//
DisplayState::DisplayState(sf::Texture* t)
{
	setTexture(t);
}


//used to delete any dynamic memory variables and objects
//
DisplayState::~DisplayState()
{
}


//Takes in a SFML event that is collected in the state manager
//
void DisplayState::eventHandle(sf::Event* e)
{
}


//used for key events with out a wait
//
void DisplayState::keyHandle()
{
}


//draw all objects in this function
//
void DisplayState::draw(sf::RenderWindow* target)
{
}


//called before draw
//no time
void DisplayState::update()
{
}


//called after the nextstate and draw
//has a clock to do things based on time
void DisplayState::fixedUpdate(sf::Clock clock)
{
}


//called after draw and before fixedupdate
//check if the state needs to be changed and changes it
int DisplayState::nextState(std::vector<DisplayState*> *d)
{
	return -1;
}


//sets the name of the state 
//
void DisplayState::setName(std::string name)
{
	stateName = name;
}


//Sets the window size for the state to use
//does not set the actual window size
void DisplayState::setWindow(sf::Vector2f w)
{
	windowSize = w;
}


//returns the name of the state
//used to search for states
std::string DisplayState::getName()
{
	return stateName;
}

void DisplayState::setTexture(sf::Texture* t)
{
	spriteSheet = t;
}


//used to find the index of a state given
//
int DisplayState::findState(std::vector<DisplayState*>* d, std::string name)
{
	int index = -1;

	for (int i = 0; i < d->size(); i++)
	{
		if (d->at(i)->getName() == name)
		{
			index = i;
			goto wack;
		}
	}
wack:
	return index;
}
