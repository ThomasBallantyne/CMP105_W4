#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	texture1.loadFromFile("gfx/Goomba.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	goomba.setTexture(&texture1);
	goomba.setSize(sf::Vector2f(50, 50));
	goomba.setOrigin(sf::Vector2f(25, 25));
	goomba.setPosition(sf::Vector2f(50, 50));

	goomba1.setTexture(&texture1);
	goomba1.setSize(sf::Vector2f(50, 50));
	goomba1.setOrigin(sf::Vector2f(25, 25));
	goomba1.setPosition(sf::Vector2f(500, 500));
	goomba1.coord = sf::Vector2f(500, 500);

	mushroom.setTexture(&texture);
	mushroom.setSize(sf::Vector2f(50, 50));
	mushroom.setPosition(sf::Vector2f(0, 0));
	mushroom.setInput(input);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	//Now that I dealth with my inputs, I will tell 
	//player and other classes who needs input to update themselves
	mushroom.handleInput(dt);
	mushroom.setPosition(mushroom.coord);

}

// Update game objects
void Level::update(float dt)
{
	mushroom.update(dt);
	goomba.update(dt);
	goomba1.update(dt);
	goomba.setPosition(goomba.coord);
	goomba1.setPosition(goomba1.coord);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(mushroom);
	window->draw(goomba);
	window->draw(goomba1);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}