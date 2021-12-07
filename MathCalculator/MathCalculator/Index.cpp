#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int UserOption, NotExit = true;
    setlocale(LC_CTYPE, "Russian");
    printf("Здравствуйте!\n");
    Sleep(1000);
    while (NotExit) {
        printf("Выберите один из доступных вариантов:\n");
        printf("1. Линейная Алгебра\n");
        printf("2. Математический анализ\n");
        printf("3. Выход\n");
        cin >> UserOption;
		switch (UserOption)
		{
		case 1:
			printf("Редирект на матан\n"); //ссылка на модуль матана
			break;
		case 2:
			printf("Редирект на алгебру\n"); //ссылка на модуль алгебры
			break;
		case 3:
			printf("Выход....\n"); // ссылка на модуль выхода
			NotExit = false;
			break;
		default:
			printf("Ошибка, повторите ввод!\n");
			break;
		}
    }
}