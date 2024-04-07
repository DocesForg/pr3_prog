#include <iostream>
#include <cmath>
#include <string>
#include "RectangleCoordinates.h"

int main() {
    setlocale(LC_ALL, "Russian");
    RectangleCoordinates rect1;
    rect1.inputCoordinates();
    std::cout << "Площадь прямоугольника: " << rect1.calculateArea() << " пикселей" << std::endl;
    rect1.drawRectangle();
    std::cout << rect1.getInfo() << std::endl;

    return 0;
}