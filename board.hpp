#ifndef board_hpp
#define board_hpp

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <windows.h>

class Place_for_boxes
{
private:
    int box_Size = 30;
    int box_Edge = 1;
public:
    sf::RectangleShape square;
    Place_for_boxes();
};

#endif
