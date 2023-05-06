#include "PlayerSnake.h"

void PlayerSnake::update()
{
	while (clock.getElapsedTime().asMilliseconds() < 500);
	clock.restart();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			m_direction = eDirection::North;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			m_direction = eDirection::South;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			m_direction = eDirection::East;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			m_direction = eDirection::West;
		}
};