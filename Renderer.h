#pragma once
#include<SFML/Graphics.hpp>
#include"Shape.h"
class Renderer
{
public:
    Renderer() : window(sf::VideoMode(800, 600), "visualiation") {}
    void addShape(std::unique_ptr<Shapes::Shape> shape);
    void render();
    sf::RenderWindow& getWindow();
    sf::Vector2f getWindowCenter();
private:
    sf::RenderWindow window;
    std::vector<std::unique_ptr <Shapes::Shape>> shapes;
};

