#pragma once
#include <iostream>
#include <cmath>
#include <string>
class RectangleCoordinates {
private:
    int x1, y1, x2, y2;

public:
    // ����������� �� ���������
    RectangleCoordinates() {
        x1 = y1 = x2 = y2 = 0;
    }

    // ����������� ������������ � �����������
    RectangleCoordinates(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    // ���������� ��� ������������ ������ � ���������� �� ����������� �������
    ~RectangleCoordinates() {
        std::cout << "������ ������!" << std::endl;
    }

    // ������� ���������� ������� �������������� � ��������
    int calculateArea() {
        return std::abs((x2 - x1) * (y2 - y1));
    }

    // ������� ������������ ����������� ������� �������������� � �������
    void drawRectangle() {
        int area = calculateArea();
        for (int i = 0; i < area; ++i) {
            std::cout << "* ";
            // ������� �� ����� ������, ���� ��������� ����� ������ ��������������
            if ((i + 1) % (x2 - x1) == 0)
                std::cout << std::endl;
        }
    }

    // ������� ������������ ������ ���������� �� �������
    std::string getInfo() {
        return "���������� ��������������: (" + std::to_string(x1) + ", " + std::to_string(y1) + "), (" + std::to_string(x2) + ", " + std::to_string(y2) + ")";
    }

    // ������� ��� ����� ��������� �������������� � ����������
    void inputCoordinates() {
        std::cout << "������� ���������� x1, y1, x2, y2 ����� ������: ";
        std::cin >> x1 >> y1 >> x2 >> y2;
    }
};
