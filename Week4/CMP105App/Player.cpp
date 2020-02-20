#include "Player.h"

Player::Player() 
{
	speed = 100;
}

Player::~Player() 
{

}

void Player::handleInput(float dt)
{
	distance = dt * speed;

	if (input->isKeyDown(sf::Keyboard::W))
	{
		coord.y -= distance;
	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		coord.y += distance;
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		coord.x -= distance;
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		coord.x += distance;
	}

	Player::setPosition(coord);
}

void Player::update(float dt)
{
	
}