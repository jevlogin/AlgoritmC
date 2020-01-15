#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

void Task01()
{
	/*
		1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где
		m-масса тела в килограммах, h - рост в метрах.
	*/
	printf("Задание №1\n");
	double humHeight = 0;
	double humWeight = 0;
	printf("Введите Рост в сантиметрах или метрах (через запятую!):");
	scanf("%lf", &humHeight);
	printf("Введите Вес в кг целым числом или с десятыми, или сотыми долями (через запятую!):");
	scanf("%lf", &humWeight);

	printf("Индекс массы человека равен: %.0lf\n\n", IndexMass(humHeight, humWeight));

	getch();
	system("cls");
}

void Task02()
{
	/*
		2. Найти максимальное из четырех чисел. Массивы не использовать
	*/
	printf("Задание №2\n");

	int a = 1, b = 3, c = 0, d = 5;
	printf("Есть числа a = %i, b = %i, c = %i, d = %i\n", a, b, c, d);

	printf("Максимальное из четырех чисел равно: %i \n\n", MaxFour(a, b, c, d));

	getch();
	system("cls");
}

void Task03()
{
	/*
		3. Написать программу обмена значениями двух целочисленных переменных:
		a. с использованием третьей переменной;
		b. *без использования третьей переменной.
	*/
	printf("Задание №3\n");

	int k = 5, f = 6;
	printf("Даны числа k = %i, и f = %i\n\n", k, f);

	printf("Первый способ с использованием временной третьей переменной\n");
	Swap(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);

	printf("Второй способ без использованием третьей переменной\n");
	SwapNotThree(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);
	getch();
	system("cls");
}

void Task04()
{
	/*
		4. Написать программу нахождения корней заданного квадратного уравнения.
	*/

	printf("Задание №4\n");
	printf("3x^2 - 4x + 1 = 0\n");		//	два корня
	//printf("x^2 + 4x + 4 = 0\n");		//	один корень
	//printf("x^2 + 6x + 45 = 0\n");	//	нет решений

	double a1 = 3, b1 = -4, c1 = 1;

	QuadraticEquation(a1, b1, c1);
}