#include "Laser.h"


Laser::Laser() : Entity()
{

	
}

Laser::Laser(sf::Texture *text) :  Entity(*text){
	las.setTexture(*text);
	las.setTextureRect(sf::IntRect(25, 125, 5, 30));
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
	las.move(0, -0.6);
}

bool Laser::offScreen() {
	if (las.getPosition().y < 0) {
		return true;
	}
	return false;
}

void Laser::setLasPosition(sf::Vector2f x) {
	las.setPosition(x);
	las.move(32, -15);
}
