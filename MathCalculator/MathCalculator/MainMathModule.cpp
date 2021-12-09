#include <iostream>
#include "MainMathModule.h"
#include "Diskriminant.h"
using namespace std;



void MainMathModule()
{
	int exited = true;
	while (exited) {
		int UserChoise;
		printf("\033c");
		printf("Добро пожаловать в модуль МатАнализа!\nВыберите один из доступных пунктов:\n");
		printf("1.Нахождение дискриминанта\n");
		printf("2.Выход\n");
		cin >> UserChoise;
		switch (UserChoise)
		{
		case 1: 
			Diskriminant();
		case 2:
			exited = false;
			break;
		}
	}

}
