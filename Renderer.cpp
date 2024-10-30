#include "Renderer.h"

void Renderer::addShape(std::unique_ptr<Shapes::Shape> shape) {
    shapes.push_back(std::move(shape));
}

void Renderer::render() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        for (auto& shape : shapes) {
            shape->draw(window);
        }
        window.display();
    }
}

sf::RenderWindow& Renderer::getWindow() {
    return window;
}

sf::Vector2f Renderer::getWindowCenter() {
    return sf::Vector2f(window.getSize().x / 2, window.getSize().y / 2);
}
