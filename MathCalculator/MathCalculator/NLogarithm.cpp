#include <iostream>
#include <cmath>
#include "MainMathModule.h"
#include "Windows.h"
#define MAX_SIZE 500
using namespace std;


int NLogarithm()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "RU");
    char value[MAX_SIZE];
    float result;
    printf("������� �����, ����������� �������� ������� ����� ��������.\n");
    cin >> value;
    if (static_cast<int>(value[0]) > 57 && static_cast<int>(value[0]) !=45 || static_cast<int>(value[0]) < 48 && static_cast<int>(value[0]) != 45) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        return 0;
    }
    if (atoi(value) == 0) {
        printf("������ - ������� ����� ������ ����!\n");
        system("pause");
        return 0;
    }
    result = log(atof(value));
    printf("����������� �������� ����� %f ����� ����� %f.\n", atof(value), result);
    system("pause");
    return 0;
}