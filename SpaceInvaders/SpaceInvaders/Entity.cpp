#include "Entity.h"


Entity::Entity()
{
}

Entity::Entity(sf::Texture text) : Object(text) {

}

Entity::~Entity() {

}

void Entity::move() {

}

bool Entity::isAlive() {
	return true;
}

