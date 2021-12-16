#include <iostream>
#include "MainAlgebraModule.h"
#include <Windows.h>
using namespace std;
void Factorial() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char number;
	int i, result = 1;
	printf("¬ведите число, факториал которого будет вычислен: ");
	cin >> number;
	if (number >= '0' && number <= '9') {
		number = number - '0'; //преобразование из char в int
		for (i = 1; i <= number; i++) {
			result = result * i;
		      }
		printf("–езультат: %d\n", result);
		}
	else { 
		printf("¬веден неверный символ...\n");
	}
	system("pause");
	MainAlgebraModule();
	}