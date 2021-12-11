#include <iostream>
#include "MainAlgebraModule.h"
#include "Matrix3x3.h"
#include "Factorial.h"
using namespace std;

void MainAlgebraModule()
{
	int exited = true;
	while (exited) {
		int UserChoise;
		printf("\033c");
		printf("Добро пожаловать в модуль Линейной Алгебры!\nВыберите один из доступных пунктов:\n");
		printf("1.Посчитать определитель матрицы 3*3\n");
		printf("2.Подсчитать факториал целого числа\n");
		printf("3.Выход\n");
		cin >> UserChoise;
		switch (UserChoise)
		{
		case 1:
			Matrix3x3();
		case 2:
			Factorial();
		case 3:
			exited = false;
			break;
		}
	}
}
