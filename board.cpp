#include "board.hpp"

Place_for_boxes::Place_for_boxes ()
{
    square.setSize(sf::Vector2f(box_Size, box_Size));
    square.setFillColor(sf::Color::White);
    square.setOutlineThickness(box_Edge);
    square.setOutlineColor(sf::Color::Black);
    square.setOrigin(box_Size/2, box_Size/2);
}
