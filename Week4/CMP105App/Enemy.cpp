#include "Enemy.h"

Enemy::Enemy()
{
	speed = 100;
	angle = 45; 
	speed1.x = 70.71;
	speed1.y = 70.71;
}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	if (coord.x < 25) {
		if (angle <= 180)
		{
			angle -= 90;
			speed1.x = speed * cos(angle);
			speed1.y = speed * sin(angle);
		}
		else
		{
			angle += 90;
			speed1.x = speed * cos(angle);
			speed1.y = speed * sin(angle);
		}
		coord.x = 25;
	}
	if (coord.x > (window->getSize().x - 25))
	{
		if (angle <= 90)
		{
			angle += 90;
			speed1.x = speed * cos(angle);
			speed1.y = speed * sin(angle);
		}
		else
		{
			angle -= 90;
			speed1.x = speed * cos(angle);
			speed1.y = speed * sin(angle);
		}
		coord.x = 1175;
	}
	if (coord.y < 25) {
		if (angle <= 90)
		{
			angle += 270;
			speed1.x = speed * cos(angle - 270);
			speed1.y = speed * sin(angle - 270);
		}
		else
		{
			angle += 90;
			speed1.x = speed * cos(angle);
			speed1.y = speed * sin(angle);
		}
		coord.y = 25;
	}
	if (coord.y > (window->getSize().y - 25))
	{
		if (angle <= 270)
		{
			angle -= 90;
			speed1.x = speed * cos(angle);
			speed1.y = speed * sin(angle);
		}
		else
		{
			angle -= 270;
			speed1.x = speed * cos(angle);
			speed1.y = speed * sin(angle);
		}
		coord.y = 650;
	}
	distance1.x = speed1.x * dt;
	distance1.y = speed1.y * dt;
	coord += distance1;
	Enemy::setPosition(coord);
}