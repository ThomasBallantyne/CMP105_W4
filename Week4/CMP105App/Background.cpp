#include "Background.h"

Background::Background()
{
	size = sf::Vector2f(11038, 675);
	speed = 1000;
	distance = 0;
}

Background::~Background()
{

}

void Background::handleInput(float dt)
{
		view = window->getView();
	
	distance = dt * speed;

	if (input->isKeyDown(sf::Keyboard::Right))
	{
		view.move(distance, 0);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		view.move(-distance, 0);
	}
}

void Background::update(float dt)
{

}