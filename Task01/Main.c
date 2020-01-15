#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*

	Логинов Евгений. 89013827902. Студент Факультет GeekBrains Разработки игр

1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где
m-масса тела в килограммах, h - рост в метрах.

2. Найти максимальное из четырех чисел. Массивы не использовать

3. Написать программу обмена значениями двух целочисленных переменных:
	a. с использованием третьей переменной;
	b. *без использования третьей переменной.

4. Написать программу нахождения корней заданного квадратного уравнения.


*/

int Power(int a)
{
	// рост в метрах 174 см = 174 / 100 1,74 метра
	return (a * a) / 10000;	
}
double PowerMH(double a)
{
	// рост в сантиметрах 174 см = 174 / 100 1,74 метра
	return (a * a);
}

double IndexMass(double height, double weight)
{
	double res = 0;
	//	I=m/(h*h)
	if (height > 3)
	{
		return weight / Power(height);
	}
	else if (height < 3)
	{
		return weight / PowerMH(height);
	}
}
int MaxTwo(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int MaxFour(int a, int b, int c, int d)
{
	int max = MaxTwo(a, b);
	max = MaxTwo(max, c);
	max = MaxTwo(max, d);
}

void Swap(int *k, int *f)
{
	int temp = *k;
	*k = *f;
	*f = temp;
}
void SwapNotThree(int* k, int* f)
{
	
	*k = *k + *f;
	*f = *k - *f;
	*k = *k - *f;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");

	double humHeight = 0;
	double humWeight = 0;
	printf("Введите Рост в сантиметрах или метрах (через запятую!):");
	scanf("%lf", &humHeight);
	printf("Введите Вес в кг целым числом или с десятыми и сотыми долями (через запятую!):");
	scanf("%lf", &humWeight);

	printf("Индекс массы человека равен: %.0lf\n\n", IndexMass(humHeight, humWeight));
	getch();
	system("cls");

	printf("Задание №2\n");

	int a = 1, b = 3, c = 0, d = 5;
	printf("Есть числа a = %i, b = %i, c = %i, d = %i\n", a, b, c, d);

	printf("Максимальное из четырех чисел равно: %i \n\n", MaxFour(a, b, c, d));
	getch();
	system("cls");

	printf("Задание №3\n");

	int k = 5, f = 6;
	printf("k = %i, f = %i\n\n", k, f);

	printf("Первый способ с использованием временной третьей переменной\n");
	Swap(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);
	
	printf("Первый способ без использованием третьей переменной\n");
	SwapNotThree(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);

	return 0;
}