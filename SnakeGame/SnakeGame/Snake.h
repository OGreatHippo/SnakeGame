#pragma once
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <time.h>


enum class eDirection { North, East, South, West };

class Snake
{
private:
	bool m_isAlive = true;
	sf::CircleShape m_Circle{ 20 };
	sf::Color m_Colour;
	sf::Vector2f m_headPos;
	int m_snakeSegments = 3;

protected:
	eDirection m_direction;

public:
	virtual void move();
	void render(sf::RenderWindow& window);
	
	Snake();

	Snake(sf::Vector2f position, float radius, sf::Color colour);
};
