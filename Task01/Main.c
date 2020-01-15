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
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");

	double humHeight = 0;
	double humWeight = 0;
	printf("Введите Рост в сантиметрах:");
	scanf("%lf", &humHeight);
	printf("Введите Вес:");
	scanf("%lf", &humWeight);

	printf("Индекс массы человека равен: %.0lf", IndexMass(humHeight, humWeight));

	return 0;
}