#include <iostream>
#include "CurvedTrapezoidArea.h"
#include <Windows.h>
#define MAX_PARTS 200
using namespace std;
int CurvedTrapezoidArea() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int UserOption, NotExit = true;
	printf("Вы находитесь в модуле вычисления площади криволинейной трапеции...\n");
	Sleep(1000);
	while (NotExit) {
		printf("\033c");
		printf("Выберите функцию, которая будет ограничивать криволинейную трапецию: \n");
		printf("1. Синус в кубе\n");
		printf("2. Косинус в кубе\n");
		printf("3. Экспонента\n");
		printf("4. X в квадрате\n");
		printf("5. Выход\n");
		cin >> UserOption;
		switch (UserOption) {
		case 1:
			SinCubeFunction();
			break;
		case 2:
			CosCubeFunction();
			break;
		case 3:
			ExpFunction();
			break;
		case 4: 
			XSquared();
			break;
		case 5:
			return 0;
			break;
		default:
			printf("Ошибка, повторите ввод!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
	int SinCubeFunction() {
		double a, b, h, S = 0;
		printf("\033c");
		printf("Введите границы отрезков: \n");
		cin >> a;
		cin >> b;
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * ((pow(sin(x), 3)) + (pow(sin(x), 3) + h)) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Площадь криволинейной трапеции, ограниченной графиком (sin(x))^3 = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(sin(x), 3)) + (pow(sin(x), 3) + h)) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Площадь криволинейной трапеции, ограниченной графиком (sin(x))^3 = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}

	int CosCubeFunction() {
		double a, b, h, S = 0;
		printf("\033c");
		printf("Введите границы отрезков: \n");
		cin >> a;
		cin	>> b;
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * ((pow(cos(x), 3)) + (pow(cos(x), 3) + h)) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Площадь криволинейной трапеции, ограниченной графиком (cos(x))^3 = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(cos(x), 3)) + (pow(cos(x), 3) + h)) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Площадь криволинейной трапеции, ограниченной графиком (cos(x))^3 = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}
	int ExpFunction() {
		double a, b, h, S = 0;
		printf("\033c");
		printf("Введите границы отрезков: \n");
		cin >> a;
		cin >> b;
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * (exp(x) + ((exp(x) + h))) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Площадь криволинейной трапеции, ограниченной графиком e^x = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(cos(x), 3)) + (pow(cos(x), 3) + h)) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Площадь криволинейной трапеции, ограниченной графиком e^x = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}
	int XSquared() {
		double a, b, h, S = 0;
		printf("\033c");
		printf("Введите границы отрезков: \n");
		cin >> a;
		cin >> b;
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * (pow(x, 2) + ((pow(x, 2) + h))) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Площадь криволинейной трапеции, ограниченной графиком x^2 = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(x, 2)) + (pow(x, 2)) + h) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Площадь криволинейной трапеции, ограниченной графиком x^2 = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}
