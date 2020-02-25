#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int foolCheck()
{
	char str[15];
	scanf_s("%s", str, _countof(str));
	int dots = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if(!isdigit(str[i]) && str[i] != ',')
			return 0;
		if (str[i] == ',')
			dots++;
	}
	if (dots > 1)
		return 0;
	double n = atof(str);
	if (n != (int)n)
	{
		return 0;
	}
	if (n < 1 || n > 100)
	{
		return 0;
	}
	return n;
}

int solve()
{
	int n = 0;
	while (n == 0)
	{
		printf("\nВведите число от 1 до 100: ");
		n = foolCheck();
		if (!n)
			printf("\nНекорректный ввод\n");
	}
	if (n > 10 && n < 20)
	{
		switch (n)
		{
		case 11: printf("Одиннадцать"); break;
		case 12: printf("Двенадцать"); break;
		case 13: printf("Тринадцать"); break;
		case 14: printf("Четырнадцать"); break;
		case 15: printf("Пятнадцать"); break;
		case 16: printf("Шестнадцать"); break;
		case 17: printf("Семнадцать"); break;
		case 18: printf("Восемнадцать"); break;
		case 19: printf("Девятнадцать"); break;
		}
	}
	else
	{
		switch (n / 10)
		{
		case 1: printf("Десять"); break;
		case 2: printf("Двадцать\t"); break;
		case 3: printf("Тридцать\t"); break;
		case 4: printf("Сорок\t"); break;
		case 5: printf("Пятьдесят\t"); break;
		case 6: printf("Шестьдесят\t"); break;
		case 7: printf("Семьдесят\t"); break;
		case 8: printf("Восемьдесят\t"); break;
		case 9: printf("Девяносто\t"); break;
		case 10: printf("Сто"); break;
		}

		switch (n % 10)
		{
		case 1: printf("один"); break;
		case 2: printf("два"); break;
		case 3: printf("три"); break;
		case 4: printf("четыре"); break;
		case 5: printf("пять"); break;
		case 6: printf("шесть"); break;
		case 7: printf("семь"); break;
		case 8: printf("восемь"); break;
		case 9: printf("девять"); break;
		}
	}
	printf("\nЕсли хотите закончить нажмите Q\n");
	char c = _getch();
	if (c == 'Q')
		return 0;
	return 1;
}

int main()
{
	setlocale(LC_ALL, ".1251");
	while (solve());
}