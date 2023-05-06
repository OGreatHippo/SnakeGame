#include "Snake.h"


Snake::Snake(sf::Vector2f position, float radius,  sf::Color colour)
{
	m_headPos = position;
	m_Circle.setRadius(radius);
	m_Colour = colour;
	m_direction = eDirection::North;
};

void Snake::move()
{
	switch (m_direction)
	{
		case eDirection::North:
			m_headPos.y -= m_Circle.getRadius();
				break;
		case eDirection::South:
			m_headPos.y += m_Circle.getRadius();
				break;
		case eDirection::East:
			m_headPos.x += m_Circle.getRadius();
			break;
		case eDirection::West:
			m_headPos.x -= m_Circle.getRadius();
	default:
		break;
	}
};

void Snake::render(sf::RenderWindow& window)
{
	m_Circle.setRadius;
	m_Circle.setPosition;
	m_Circle.setFillColor(sf::Color::Blue);
	window.draw(m_Circle);
}