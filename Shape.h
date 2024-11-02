#pragma once
#include <SFML/Graphics.hpp>

namespace Shapes {
    //Абстрактный класс от которого наследуются все фигуры/графические элементы
    class Shape
    {
    public:
        virtual void draw(sf::RenderWindow& window) = 0;
        virtual ~Shape() = default;
    };
}
