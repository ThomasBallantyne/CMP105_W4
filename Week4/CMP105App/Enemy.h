#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>
class Enemy: public GameObject
{
public:

	Enemy();
	~Enemy();

	sf::Vector2f coord;
	sf::Vector2f speed1;
	sf::Vector2f distance1;
	float distance;
	float speed;
	float angle;

	void update(float dt) override;

protected:
	sf::RenderWindow* window;
};

