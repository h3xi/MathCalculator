#include <iostream>
#include "MainAlgebraModule.h"
#include <Windows.h>
using namespace std;
void Factorial() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char number;
	int i, result = 1;
	printf("������� �����, ��������� �������� ����� ��������: ");
	cin >> number;
	if (number >= '0' && number <= '9') {
		number = number - '0'; //�������������� �� char � int
		for (i = 1; i <= number; i++) {
			result = result * i;
		      }
		printf("���������: %d\n", result);
		}
	else { 
		printf("������ �������� ������...\n");
	}
	system("pause");
	MainAlgebraModule();
	}