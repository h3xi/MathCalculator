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
		printf("����� ���������� � ������ ����������!\n�������� ���� �� ��������� �������:\n");
		printf("1.���������� �������������\n");
		printf("2.�����\n");
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
