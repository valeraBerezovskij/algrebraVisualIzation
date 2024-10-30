#include "CoordinateSystem.h"

CoordinateSystem::CoordinateSystem(RenderWindow& window) {
    unit = 10;
    const size_t size_s = 200;
    Vector2u size = window.getSize(); //размер окна
    Vector2f center(static_cast<float>(size.x) / 2, static_cast<float>(size.y) / 2); // центр окна

    for (int i = 0; i < 41; ++i) {
        separations.push_back(std::make_pair(Vertex(Vector2f(center.x - 4, center.y - size_s + i * unit), Color::Red),
                                             Vertex(Vector2f(center.x + 3, center.y - size_s + i * unit), Color::Red)));
    }
    
    for (int i = 0; i < 41; ++i) {
        separations.push_back(std::make_pair(Vertex(Vector2f(center.x - size_s + i * unit, center.y - 3), Color::Red),
                                             Vertex(Vector2f(center.x - size_s + i * unit, center.y + 4), Color::Red)));
    }


    abscissa = std::make_pair(Vertex(Vector2f(center.x - size_s, center.y), Color::Red),
		                      Vertex(Vector2f(center.x + size_s, center.y), Color::Red));

    ordinate = std::make_pair(Vertex(Vector2f(center.x, center.y - size_s), Color::Red),
                              Vertex(Vector2f(center.x, center.y + size_s), Color::Red));
}

void CoordinateSystem::draw(RenderWindow& window) {
    Vertex lineX[] = {   
            abscissa.first, abscissa.second };
    Vertex lineY[] = {
            ordinate.first, ordinate.second };

    for (line sep : separations) {
        Vertex separation[] = { sep.first, sep.second };
        window.draw(separation, 2, sf::Lines);
    }
    window.draw(lineX, 2, sf::Lines);
    window.draw(lineY, 2, sf::Lines);
}
