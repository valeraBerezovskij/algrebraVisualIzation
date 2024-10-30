#include "Vector.h"

Vector::Vector(Point x, Point y, const sf::Vector2f& center)
	: first(x), second(y)
{
	int unit = 10;
	vector = std::make_pair(
		sf::Vertex(sf::Vector2f(center.x + first.x * unit, center.y - first.y * unit), sf::Color::Green),
		sf::Vertex(sf::Vector2f(center.x + second.x * unit, center.y - second.y * unit), sf::Color::Red)
	);
}

void Vector::draw(sf::RenderWindow& window)
{
	sf::Vertex vectorLine[] = {
			vector.first, vector.second };
	window.draw(vectorLine, 2, sf::Lines);
}
