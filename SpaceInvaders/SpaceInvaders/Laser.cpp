#include "Laser.h"


Laser::Laser() : Entity()
{

	
}

Laser::Laser(sf::Texture *text, sf::Vector2f f) :  Entity(*text){
	las.setTexture(*text);
	las.setTextureRect(sf::IntRect(25, 125, 5, 30));
	las.setPosition(f);
	las.move(30, -15);
}

Laser::~Laser() {

}

bool Laser::checkForCollision() {
	return true;
}

void Laser::display(sf::RenderWindow & window) {
	window.draw(las);
}

void Laser::move() {
	las.move(0, -0.3);
}
