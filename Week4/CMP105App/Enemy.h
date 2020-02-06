#pragma once
#include "Framework/GameObject.h"
class Enemy: public GameObject
{
public:

	Enemy();
	~Enemy();

	sf::Vector2f coord = sf::Vector2f(0, 0);
	sf::Vector2f speed1 = sf::Vector2f(0, 0);
	sf::Vector2f distance1 = sf::Vector2f(0, 0);
	float distance;
	float speed = 100;
	float angle = 45;

	void update(float dt) override;
};

