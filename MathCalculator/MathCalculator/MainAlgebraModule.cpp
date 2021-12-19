#include <iostream>
#include "MainAlgebraModule.h"
#include "Matrix3x3.h"
#include "VectorDistance.h"
#include "VectorAddition.h"
#include "VectorSubstraction.h"
#include "Factorial.h"
#include "MatrixSummation.h"
using namespace std;

void MainAlgebraModule()
{
	int exited = true;
	while (exited) {
		int UserChoise;
		printf("\033c");
		printf("����� ���������� � ������ �������� �������!\n�������� ���� �� ��������� �������:\n");
		printf("1.��������� ������������ ������� 3*3\n");
		printf("2.���������� �������\n");
		printf("3.�������� ��������\n");
		printf("4.��������� ��������\n");
		printf("5.��������� ��������� �����\n");
		printf("6.�������� ������\n");
		printf("7.�����\n");
		cin >> UserChoise;
		switch (UserChoise)
		{
		case 1:
			Matrix3x3();
			break;
		case 2:
			VectorDistance();
			break;
		case 3:
			VectorAddition();
			break;
		case 4:
			VectorSubstraction();
			break;
		case 5:
			Factorial();
			break;
		case 6: 
			MatrixSummation();
			break;
		case 7:
			exited = false;
			break;
		default:
			printf("������ �������� ������� ����! ��������� ����\n");
			system("pause");
			break;
		}
		
	}
}
