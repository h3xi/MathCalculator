
#include <iostream>
#include <cmath>
#include  "MainAlgebraModule.h"

using namespace std;

void VektorSubstraction()
{
    setlocale(LC_CTYPE, "RU");
    int x, y, z, x1, y1, z1, x2, y2, z2;

    printf("������� �������� x1: ");
    cin >> x1;
    printf("������� �������� y1: ");
    cin >> y1;
    printf("������� �������� z1: ");
    cin >> z1;
    printf("������� �������� x2: ");
    cin >> x2;
    printf("������� �������� y2: ");
    cin >> y2;
    printf("������� �������� z2: ");
    cin >> z2;
    x = x1 - x2;
    y = y1 - y2;
    z = z1 - z2;
    printf("���������� ����� ������� ����� (%d, %d,%d)\n", x, y, z);
    system("pause");
    MainAlgebraModule();
}