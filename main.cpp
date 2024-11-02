#include "Renderer.h"
#include "ShapeCreator.h"

int main() {
    Renderer renderer;
    auto corsys = ShapeCreator::createCoordinateSystem(renderer.getWindow());
    renderer.addShape(std::move(corsys));

    auto vector = ShapeCreator::createVector(Point(-6,2), Point(-8,-2), renderer.getWindowCenter(), sf::Color::Black);
    renderer.addShape(std::move(vector));

    renderer.render();

    return 0;
}