#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

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

void Func4(double a, double b, double c);
int Discriminant(double a, double b, double c);


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	/*
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
	printf("Даны числа k = %i, и f = %i\n\n", k, f);

	printf("Первый способ с использованием временной третьей переменной\n");
	Swap(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);
	
	printf("Второй способ без использованием третьей переменной\n");
	SwapNotThree(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);
	*/
	printf("Задание №4\n");
	//printf("3x^2 - 4x + 1 = 0\n");
	//printf("x^2 + 4x + 4 = 0\n");
	printf("x^2 + 6x + 45 = 0\n");

	double a = 1, b = 6, c = 5;

	Func4(a, b, c);

	return 0;
}

void Func4(double a, double b, double c)
{
	double x1;
	double x2;
	//	"3x^2 - 4x + 1 = 0";
	//	b^2 - 4ac	формула дискриминанта
	int d = Discriminant(a, b, c);
	printf("Дискриминант равен %i\n", d);
	if (d < 0)
	{
		printf("Корней квадратного уравнения нет. Дискриминант меньше ноля.\n");
	}
	else if (d == 0)
	{
		printf("Есть один корень квадратного уравнения.\n");
		x1 = -b / 2 * a;
		printf("x = %.2f\n", x1);
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);	//	Пока не поставил в скобки (2 * a) значение выдавалось не верно! Не знаю почему!!!
		x2 = (-b - sqrt(d)) / (2 * a);	//	Пока не поставил в скобки (2 * a) значение выдавалось не верно! Не знаю почему!!!
		printf("В решении два корня квадратного уравнения. x1 = %.2f, x2 = %.2f\n", x1, x2);
	}

}
int Discriminant(double a, double b, double c)
{
	return pow(b, 2) - 4 * a * c;
}

