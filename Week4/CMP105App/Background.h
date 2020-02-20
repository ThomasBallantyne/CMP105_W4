#pragma once
#include "Framework/GameObject.h"
class Background: public GameObject
{
public:

	Background();
	~Background();

	sf::Vector2f size;
	float distance;
	float speed;

	void handleInput(float dt) override;
	void update(float dt) override;

};

