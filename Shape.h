#pragma once
#include <SFML/Graphics.hpp>

namespace Shapes {
    class Shape
    {
    public:
        virtual void draw(sf::RenderWindow& window) = 0;
        virtual ~Shape() = default;
    };


}
