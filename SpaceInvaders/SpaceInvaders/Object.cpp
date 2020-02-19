#include "Object.h"

Object::Object()
{
}

Object::Object(sf::Texture text) {
	spriteSheet = text;
}

Object::~Object() {

}

void Object::draw() {

}

void Object::setTeam(){

}

int Object::getTeam() {
	return 1;
}

void Object::collision(Object) {

}