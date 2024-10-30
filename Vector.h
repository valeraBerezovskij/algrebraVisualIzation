#pragma once
#include "Shape.h"
#include "Point.h"

using line = std::pair<sf::Vertex, sf::Vertex>;

class Vector : public Shapes::Shape
{
public:
	Vector(Point x, Point y, const sf::Vector2f& center);
	void draw(sf::RenderWindow& window);
private:
	Point first;
	Point second;
	line vector;
};

