#include <iostream>
#include "MainAlgebraModule.h"
using namespace std;
void Factorial() {
	int number, i, result = 1;
	printf("¬ведите число, факториал которого будет вычислен: ");
	cin >> number;
	for (i = 1; i <= number; i++) {
		result = result * i;
	}
	printf("–езультат: %d\n", result);
	system("pause");
	MainAlgebraModule();
}