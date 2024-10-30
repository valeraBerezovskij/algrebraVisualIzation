#include "Renderer.h"
#include "ShapeCreator.h"

int main() {
    Renderer renderer;
    auto corsys = ShapeCreator::createCoordinateSystem(renderer.getWindow());
    renderer.addShape(std::move(corsys));

    auto vector = ShapeCreator::createVector(Point(0,2), Point(10,10), renderer.getWindowCenter());
    renderer.addShape(std::move(vector));

    renderer.render();

    return 0;
}