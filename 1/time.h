#include <iostream>
#include <string>
class Time {
private:
    int hours;
    int minutes;

public:
    // Конструктор для инициализации объекта
    Time(int h, int m) : hours(h), minutes(m) {}

    // Функция формирования строки с информацией об объекте
    std::string getInfo() {
        return std::to_string(hours) + " час(ов) " + std::to_string(minutes) + " минут";
    }

    // Функция для вычисления общего количества минут
    int getTotalMinutes() {
        return hours * 60 + minutes;
    }
};