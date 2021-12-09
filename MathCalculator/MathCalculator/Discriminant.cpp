#include <iostream>
#include <cmath>
#include "MainMathModule.h"
using namespace std;

void Discriminant()
{
    setlocale(LC_CTYPE, "RU");
    double a,b,c,x1,x2;
   
    printf("Введите значение a: ");
    cin >> a;
    printf("Введите значение b: ");
    cin >> b;
    printf("Введите значение c: ");
    cin >> c;
    if ((b * b - 4 * a * c) >= 0) //Если дискриминант больше или равен 0
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("Первый корень равен %f\n", x1);
        x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("Второй корень равен %f\n", x2);
    }
    else
    {
        printf("Дискриминант меньше 0, корни невещественные!\n");
    }
    system("pause");
    MainMathModule();
}