#pragma once
#include "Shape.h"
using namespace sf;

using line = std::pair<Vertex, Vertex>;

class CoordinateSystem : public Shapes::Shape
{
public:
	CoordinateSystem(RenderWindow& window);
	void draw(RenderWindow& window);
private:
	size_t unit; // длина одной единицы на оси в пикселях
	line abscissa;
	line ordinate;
	std::vector<line> separations;
};

