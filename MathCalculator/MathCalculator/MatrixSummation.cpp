#include <iostream>
#include "MatrixSummation.h"
#include <Windows.h>
#define MAX_SIZE 500
#define MAX_MATRIX_SIZE 10
using namespace std;
int MatrixSummation() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char rows[MAX_MATRIX_SIZE], columns[MAX_MATRIX_SIZE];	
	char Element[MAX_SIZE];
	int irows, icolumns;
	int i, j, firstMatrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], secondMatrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], resultMatrix[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE];
	printf("������� ���������� ����� ������ �������: \n");
	cin >> rows;
	if (static_cast<int>(rows[0]) > 57 && static_cast<int>(rows[0]) != 45 || static_cast<int>(rows[0]) < 48 && static_cast<int>(rows[0]) != 45) {
		printf("������ - ������ ������������ ������...\n");
		system("pause");
		return 0;
	}
	irows = atoi(rows);
	printf("������� ���������� �������� ������ �������: \n");
	cin >> columns;
	if (static_cast<int>(columns[0]) > 57 && static_cast<int>(columns[0]) != 45 || static_cast<int>(columns[0]) < 48 && static_cast<int>(columns[0]) != 45) {
		printf("������ - ������ ������������ ������...\n");
		system("pause");
		return 0;
	}
	icolumns = atoi(columns);
	// ����������� ������ ������� ����� ����� ��
	printf("������� �������� ������ �������: \n");
	for (i = 0; i < irows; i++) {
		for (j = 0; j < icolumns; j++) {
			cin >> Element;
			if (static_cast<int>(Element[0]) > 57 && static_cast<int>(Element[0]) != 45 || static_cast<int>(Element[0]) < 48 && static_cast<int>(Element[0]) != 45) {
				printf("������ - ������ ������������ ������....\n");
				system("pause");
				return 0;
			}
			else { 
				firstMatrix[i][j] = atoi(Element); 
			}
		}
	}
	printf("������ �������: \n");
	for (i = 0; i < irows; i++) {
		for (j = 0; j < icolumns; j++)
			cout << firstMatrix[i][j] << "\t";
		cout << endl;
	}
	printf("������� �������� ������ �������: \n");
	for (i = 0; i < irows; i++) {
		for (j = 0; j < icolumns; j++) {
			cin >> Element;
			if (static_cast<int>(Element[0]) > 57 && static_cast<int>(Element[0]) != 45 || static_cast<int>(Element[0]) < 48 && static_cast<int>(Element[0]) != 45) {
				printf("������ - ������ ������������ ������....\n");
				system("pause");
				return 0;
			}
			else {
				secondMatrix[i][j] = atoi(Element);
			}
		}
	}
	printf("������ �������: \n");
	for (i = 0; i < irows; i++) {
		for (j = 0; j < icolumns; j++)
			cout << secondMatrix[i][j] << "\t";
		cout << endl;
	}
	printf("��������� �������� ������: \n");
	for (i = 0; i < irows; i++)
	    for (j = 0; j < icolumns; j++)
		resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
	for (i = 0; i < irows; i++) {
		for (j = 0; j < icolumns; j++)
			cout << resultMatrix[i][j] << "\t";
		cout << endl;
	}
	system("pause");
	return 0;
}