#include "Vector.h"

Vector::Vector(Point x, Point y, const sf::Vector2f& center, sf::Color color)
	: first(x), second(y)
{
	int unit = 10;

	//Оталкиваемся от центра системы координат 
	vector = std::make_pair(
		sf::Vertex(sf::Vector2f(center.x + first.x * unit, center.y - first.y * unit), color),
		sf::Vertex(sf::Vector2f(center.x + second.x * unit, center.y - second.y * unit), color)
	);

	Point c = getArrowPoint(true);
	arrowLineRight = std::make_pair(
		sf::Vertex(sf::Vector2f(center.x + second.x * unit, center.y - second.y * unit), sf::Color::Black),
		sf::Vertex(sf::Vector2f(center.x + c.x * unit, center.y - c.y * unit), sf::Color::Black)
	);

	c = getArrowPoint(false);
	arrowLineLeft = std::make_pair(
		sf::Vertex(sf::Vector2f(center.x + second.x * unit, center.y - second.y * unit), sf::Color::Black),
		sf::Vertex(sf::Vector2f(center.x + c.x * unit, center.y - c.y * unit), sf::Color::Black)
	);

}

void Vector::draw(sf::RenderWindow& window)
{
	sf::Vertex vectorLine[] = { vector.first, vector.second };
	sf::Vertex arrowLinesLeft[] = { arrowLineLeft.first, arrowLineLeft.second };
	sf::Vertex arrowLinesRight[] = { arrowLineRight.first, arrowLineRight.second };


	window.draw(vectorLine, 2, sf::Lines);
	window.draw(arrowLinesLeft, 2, sf::Lines);
	window.draw(arrowLinesRight, 2, sf::Lines);
}
