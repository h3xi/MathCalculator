#include <iostream>
#include "MainMathModule.h"
#include "Discriminant.h"
#include "CurvedTrapezoidArea.h"
#include "NLogarithm.h"
#include "Logarithm10.h"
using namespace std;



void MainMathModule()
{
	int exited = true;
	while (exited) {
		int UserChoise;
		printf("\033c");
		printf("����� ���������� � ������ ����������!\n�������� ���� �� ��������� �������:\n");
		printf("1.���������� �������������\n");
		printf("2.���������� ������� ����������� ��������\n");
		printf("3.���������� ������������ ��������� �����\n");
		printf("4.���������� ����������� ��������� �����\n");
		printf("5.�����\n");
		cin >> UserChoise;
		switch (UserChoise)
		{
		case 1: 
			Discriminant();
			break;
		case 2:
			CurvedTrapezoidArea();
			break;
		case 3:
			NLogarithm();
			break;
		case 4:
			Logarithm10();
			break;
		case 5:
			exited = false;
			break;
		default:
			printf("������ �������� ������� ����! ��������� ����\n");
			system("pause");
			break;
		}

	}

}
