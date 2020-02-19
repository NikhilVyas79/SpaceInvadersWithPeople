#include "LaserCannon.h"


LaserCannon::LaserCannon(sf::Texture * text) : Entity(*text) {
	t.setTexture(*text);
	t.setTextureRect(sf::IntRect(5, 100, 65, 40));
	t.setPosition(50, 700);
}

LaserCannon::~LaserCannon() {

}

void LaserCannon::move(bool direc) {
	if (direc&&t.getPosition().x-8>12) {
		t.move(-8, 0);
	}
	if(t.getPosition().x<1100&&!direc) {
		t.move(8, 0);
	}
}

void LaserCannon::display(sf::RenderWindow & window) {
	window.draw(t);
}

sf::Vector2f LaserCannon::getCannonPosition() {
	return t.getPosition();
}
