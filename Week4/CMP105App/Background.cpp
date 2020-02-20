#include "Background.h"

Background::Background()
{
	size = sf::Vector2f(11038, 675);
	speed = 100;
	distance = 0;
}

Background::~Background()
{

}

void Background::handleInput(float dt)
{
	distance = dt * speed;

	if (input->isKeyDown(sf::Keyboard::Right))
	{
		
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		
	}
}

void Background::update(float dt)
{

}