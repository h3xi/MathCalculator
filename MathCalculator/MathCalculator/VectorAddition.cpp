#include <iostream>
#include <cmath>
#include  "MainAlgebraModule.h"
#include "Windows.h"
#include <stdlib.h>
#define MAX_SIZE 500
using namespace std;


int VectorAddition()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "RU");
    int x, y, z;
    char x1[MAX_SIZE], y1[MAX_SIZE], z1[MAX_SIZE], x2[MAX_SIZE], y2[MAX_SIZE], z2[MAX_SIZE];

    printf("������� �������� x1: ");
    cin >> x1;
    if (static_cast<int>(x1[0]) > 57 && static_cast<int>(x1[0]) != 45 || static_cast<int>(x1[0]) < 48 && static_cast<int>(x1[0]) != 45) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        return 0;
    }
    printf("������� �������� y1: ");
    cin >> y1;
    if (static_cast<int>(y1[0]) > 57 && static_cast<int>(y1[0]) != 45 || static_cast<int>(y1[0]) < 48 && static_cast<int>(y1[0]) != 45) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        return 0;
    }
    printf("������� �������� z1: ");
    cin >> z1;
    if (static_cast<int>(z1[0]) > 57 && static_cast<int>(z1[0]) != 45 || static_cast<int>(z1[0]) < 48 && static_cast<int>(z1[0]) != 45) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        return 0;
    }
    printf("������� �������� x2: ");
    cin >> x2;
    if (static_cast<int>(x2[0]) > 57 && static_cast<int>(x2[0]) != 45 || static_cast<int>(x2[0]) < 48 && static_cast<int>(x2[0]) != 45) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        return 0;
    }
    printf("������� �������� y2: ");
    cin >> y2;
    if (static_cast<int>(y2[0]) > 57 && static_cast<int>(y2[0]) != 45 || static_cast<int>(y2[0]) < 48 && static_cast<int>(y2[0]) != 45) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        return 0;
    }
    printf("������� �������� z2: ");
    cin >> z2;
    if (static_cast<int>(z2[0]) > 57 && static_cast<int>(z2[0]) != 45 || static_cast<int>(z2[0]) < 48 && static_cast<int>(z2[0]) != 45) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        return 0;
    }
    x = atoi(x1) + atoi(x2);
    y = atoi(y1) + atoi(y2);
    z = atoi(z1) + atoi(z2);
    printf("��� �������� ���� �������� �������� ����� ������ � ������������ (%d, %d,%d)\n", x, y, z);
    
    system("pause");
    return 0;
}