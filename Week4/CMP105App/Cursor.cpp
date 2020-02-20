#include "Cursor.h"

Cursor::Cursor()
{

}

Cursor::~Cursor()
{

}

void Cursor::update(float dt)
{
	Cursor::setPosition(input->getMouseX(), input->getMouseY());
}