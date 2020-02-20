#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>
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
	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; };

protected:
	sf::RenderWindow* window;
	sf::View view;
};

