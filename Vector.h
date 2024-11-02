#pragma once
#include "Shape.h"
#include "Point.h"
#include <cmath>
using line = std::pair<sf::Vertex, sf::Vertex>;

class Vector : public Shapes::Shape
{
public:
	Vector(Point x, Point y, const sf::Vector2f& center, sf::Color color);

	Point getArrowPoint(bool dir) {
		double distance = 1.1;
		double angle;
		dir ? angle = 160.0 : angle = -160.0;
		double angleRadians = angle * 3.1415 / 180.0;
		double alpha = atan2(second.y - first.y, second.x - first.x);
		double beta = alpha + angleRadians;
		Point C;
		C.x = second.x + distance * cos(beta);
		C.y = second.y + distance * sin(beta);
		return C;
	}

	void draw(sf::RenderWindow& window);
private:
	Point first;
	Point second;
	line vector;
	line arrowLineRight;
	line arrowLineLeft;
};

