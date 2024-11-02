#pragma once
#include "Shape.h"
#include "Point.h"
#include "Vector.h"
#include "CoordinateSystem.h"

class ShapeCreator
{
public:
	static std::unique_ptr<Shapes::Shape> createCoordinateSystem(RenderWindow& window) {
		return std::make_unique<CoordinateSystem>(window);
	}
	static std::unique_ptr<Shapes::Shape> createVector(Point x, Point y, const sf::Vector2f& center, sf::Color color = sf::Color::Black) {
		return std::make_unique<Vector>(x, y, center, color);
	}
};

