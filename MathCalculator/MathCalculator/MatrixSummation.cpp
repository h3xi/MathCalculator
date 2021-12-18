#include <iostream>
#include "MatrixSummation.h"
#include <Windows.h>
#define MAX_SIZE 500
#define MAX_MATRIX_SIZE 10
using namespace std;
int MatrixSummation() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int rows, columns;
	int i, j, firstMatrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], secondMatrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], resultMatrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE];
	printf("������� ���������� ����� ������ �������: \n");
	cin >> rows;
	printf("������� ���������� �������� ������ �������: \n");
	cin >> columns;
	// ����������� ������ ������� ����� ����� ��
	printf("������� �������� ������ �������: \n");
	for (i = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
			cin >> firstMatrix[i][j];
	printf("������ �������: \n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++)
			cout << firstMatrix[i][j] << "\t";
		cout << endl;
	}

	printf("������� �������� ������ �������: \n");
	for (i = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
			cin >> secondMatrix[i][j];
	printf("������ �������: \n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++)
			cout << secondMatrix[i][j] << "\t";
		cout << endl;
	}
	printf("��������� �������� ������: \n");
	for (i = 0; i < rows; i++)
	    for (j = 0; j < columns; j++)
		resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++)
			cout << resultMatrix[i][j] << "\t";
		cout << endl;
	}
	system("pause");
	return 0;
}