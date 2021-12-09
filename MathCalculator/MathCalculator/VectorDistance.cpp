
#include <iostream>
#include <cmath>
#include  "MainAlgebraModule.h"

using namespace std;

void VectorDistance()
{
    setlocale(LC_CTYPE, "RU");
    int A,B,C,D,A1,B1;
    
    printf("Введите значение A: ");
    cin >> A;
    printf("Введите значение B: ");
    cin >> B;
    printf("Введите значение C: ");
    cin >> C;
    printf("Введите значение D: ");
    cin >> D;
    A1 = abs(C - A);
    B1 = abs(D - B);
        printf("Расстояние между точками равно (%d, %d)\n", A1, B1);
        system("pause");
        MainAlgebraModule();

    
}

