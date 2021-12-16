#include <iostream>
#include <cmath>
#include  "MainAlgebraModule.h"
#include "Windows.h"

using namespace std;

void VectorAddition()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "RU");
    char x, y, z, x1, y1, z1, x2, y2, z2;

    printf("������� �������� x1: ");
    cin >> x1;
    if (static_cast<int>(x1) > 57 || static_cast<int>(x1) < 48) {
        printf("������ - ������ ������������ ������...\n");
        system("pause");
        MainAlgebraModule();
        
    }
    printf("������� �������� y1: ");
    cin >> y1;
    if (static_cast<int>(y1) > 57 || static_cast<int>(y1) < 48) {
        printf("������");
        MainAlgebraModule();

    }
    printf("������� �������� z1: ");
    cin >> z1;
    if (static_cast<int>(z1) > 57 || static_cast<int>(z1) < 48) {
        printf("������");
        MainAlgebraModule();

    }
    printf("������� �������� x2: ");
    cin >> x2;
    if (static_cast<int>(x2) > 57 || static_cast<int>(x2) < 48) {
        printf("������");
        system("pause");
        MainAlgebraModule();

    }
    printf("������� �������� y2: ");
    cin >> y2;
    if (static_cast<int>(y2) > 57 || static_cast<int>(y2) < 48) {
        printf("������");
        MainAlgebraModule();

    }
    printf("������� �������� z2: ");
    cin >> z2;
    if (static_cast<int>(z2) > 57 || static_cast<int>(z2) < 48) {
        printf("������");
        VectorAddition();

    }
    x1 -= '0';
    x2 -= '0';
    y1 -= '0';
    y2 -= '0';
    z1 -= '0';
    z2 -= '0';
    x = x1 + x2;
    y = y1 + y2;
    z = z1 + z2;
    printf("��� �������� ���� �������� �������� ����� ������ � ������������ (%d, %d,%d)\n", x, y, z);
    
    system("pause");
    MainAlgebraModule();
}