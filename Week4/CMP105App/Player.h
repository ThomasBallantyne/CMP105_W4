#pragma once
#include "Framework/GameObject.h"
class Player: public GameObject 
{
public:

	Player();
	~Player();

	sf::Vector2f coord = sf::Vector2f(0, 0);
	float distance;
	float speed;

	void handleInput(float dt) override;
	void update(float dt) override;
};

