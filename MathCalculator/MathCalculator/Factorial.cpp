#include <iostream>
#include "MainAlgebraModule.h"
using namespace std;
void Factorial() {
	int number, i, result = 1;
	printf("������� �����, ��������� �������� ����� ��������: ");
	cin >> number;
	for (i = 1; i <= number; i++) {
		result = result * i;
	}
	printf("���������: %d\n", result);
	system("pause");
	MainAlgebraModule();
}