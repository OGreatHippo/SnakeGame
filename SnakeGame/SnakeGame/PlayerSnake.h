#pragma once
#include "Snake.h"

class PlayerSnake: public Snake
{
public:
	sf::Clock clock;
	void update();
};

