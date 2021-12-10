
#include <iostream>
#include <cmath>
#include  "MainAlgebraModule.h"

using namespace std;

void VectorDistance()
{
    setlocale(LC_CTYPE, "RU");
    int x1,y1,x2,y2,x,y;
    
    printf("Введите значение x1: ");
    cin >> x1;
    printf("Введите значение y1: ");
    cin >> y1;
    printf("Введите значение x2: ");
    cin >> x2;
    printf("Введите значение y2: ");
    cin >> y2;
    x = abs(x2 - x1);
    y = abs(y2 - y1);
        printf("Расстояние между точками равно (%d, %d)\n", x, y);
        system("pause");
        MainAlgebraModule();

    
}

