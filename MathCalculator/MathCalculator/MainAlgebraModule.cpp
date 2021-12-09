#include <iostream>
#include "MainAlgebraModule.h"
#include "Matrix3x3.h"
#include "VectorDistance.h"
#include "VectorAddition.h"
#include "VectorSubstraction.h"
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
		printf("5.�����\n");
		cin >> UserChoise;
		switch (UserChoise)
		{
		case 1:
			Matrix3x3();
		case 2:
			VectorDistance();
		case 3:
			VectorAddition();
		case 4:
			VectorSubstraction();
		case 5:
			exited = false;
			break;
		}
	}
}
