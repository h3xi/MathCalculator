
#include <iostream>
#include <cmath>
#include  "MainAlgebraModule.h"

using namespace std;

void VectorSubstraction()
{
    setlocale(LC_CTYPE, "RU");
    int x, y, z, x1, y1, z1, x2, y2, z2;

    printf("¬ведите значение x1: ");
    cin >> x1;
    printf("¬ведите значение y1: ");
    cin >> y1;
    printf("¬ведите значение z1: ");
    cin >> z1;
    printf("¬ведите значение x2: ");
    cin >> x2;
    printf("¬ведите значение y2: ");
    cin >> y2;
    printf("¬ведите значение z2: ");
    cin >> z2;
    x = x1 - x2;
    y = y1 - y2;
    z = z1 - z2;
    printf("ѕри вычитании двух векторов получаем новый вектор с координатами (%d, %d,%d)\n", x, y, z);
    system("pause");
    MainAlgebraModule();
}