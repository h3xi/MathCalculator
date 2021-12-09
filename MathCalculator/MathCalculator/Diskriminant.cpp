#include <iostream>
#include <cmath>
#include "MainMathModule.h"
using namespace std;

void Diskriminant()
{
    setlocale(LC_CTYPE, "RU");
    double a,b,c,x;
   
    printf("Введите значение a: ");
    cin >> a;
    printf("Введите значение b: ");
    cin >> b;
    printf("Введите значение c: ");
    cin >> c;
    if ((b * b - 4 * a * c) >= 0) //Если дискриминант больше или равен 0
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "Первый корень равен " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "Второй корень равен " << x << endl;
    }
    else
    {
        printf("Дискриминант меньше 0, корни невещественные!\n");
    }
    system("pause");
    MainMathModule();
}