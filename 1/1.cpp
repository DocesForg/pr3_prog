#include <iostream>
#include <string>
#include <time.h>
#include "time.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int h, m;

    // Ввод часов с клавиатуры
    std::cout << "Введи часы: ";
    std::cin >> h;

    // Ввод минут с клавиатуры
    std::cout << "Ввведи минуты: ";
    std::cin >> m;

    // Создание объекта класса Time
    Time time(h, m);

    // Вывод информации о времени
    std::cout << "Время: " << time.getInfo() << std::endl;

    // Вывод общего количества минут
    std::cout << "Общее колличество минут: " << time.getTotalMinutes() << std::endl;

    return 0;
}
