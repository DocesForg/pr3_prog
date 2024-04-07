#pragma once
#include <iostream>
#include <cmath>
#include <string>
class RectangleCoordinates {
private:
    int x1, y1, x2, y2;

public:
    // Конструктор по умолчанию
    RectangleCoordinates() {
        x1 = y1 = x2 = y2 = 0;
    }

    // Конструктор перезагрузки с параметрами
    RectangleCoordinates(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    // Деструктор для освобождения памяти с сообщением об уничтожении объекта
    ~RectangleCoordinates() {
        std::cout << "Объект удален!" << std::endl;
    }

    // Функция вычисления площади прямоугольника в пикселях
    int calculateArea() {
        return std::abs((x2 - x1) * (y2 - y1));
    }

    // Функция графического изображения площади прямоугольника в консоли
    void drawRectangle() {
        int area = calculateArea();
        for (int i = 0; i < area; ++i) {
            std::cout << "* ";
            // Переход на новую строку, если достигнут конец строки прямоугольника
            if ((i + 1) % (x2 - x1) == 0)
                std::cout << std::endl;
        }
    }

    // Функция формирования строки информации об объекте
    std::string getInfo() {
        return "Координаты прямоугольника: (" + std::to_string(x1) + ", " + std::to_string(y1) + "), (" + std::to_string(x2) + ", " + std::to_string(y2) + ")";
    }

    // Функция для ввода координат прямоугольника с клавиатуры
    void inputCoordinates() {
        std::cout << "Введите координаты x1, y1, x2, y2 через пробел: ";
        std::cin >> x1 >> y1 >> x2 >> y2;
    }
};
