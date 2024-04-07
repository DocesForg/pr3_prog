#include <iostream>
#include <string>
class Time {
private:
    int hours;
    int minutes;

public:
    // ����������� ��� ������������� �������
    Time(int h, int m) : hours(h), minutes(m) {}

    // ������� ������������ ������ � ����������� �� �������
    std::string getInfo() {
        return std::to_string(hours) + " ���(��) " + std::to_string(minutes) + " �����";
    }

    // ������� ��� ���������� ������ ���������� �����
    int getTotalMinutes() {
        return hours * 60 + minutes;
    }
};