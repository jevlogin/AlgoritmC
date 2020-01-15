#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*

	������� �������. 89013827902. ������� ��������� GeekBrains ���������� ���

1. ������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ���
m-����� ���� � �����������, h - ���� � ������.

2. ����� ������������ �� ������� �����. ������� �� ������������

3. �������� ��������� ������ ���������� ���� ������������� ����������:
	a. � �������������� ������� ����������;
	b. *��� ������������� ������� ����������.

4. �������� ��������� ���������� ������ ��������� ����������� ���������.


*/

int Power(int a)
{
	// ���� � ������ 174 �� = 174 / 100 1,74 �����
	return (a * a) / 10000;	
}
double PowerMH(double a)
{
	// ���� � ����������� 174 �� = 174 / 100 1,74 �����
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
	printf("������� ���� � ����������� ��� ������ (����� �������!):");
	scanf("%lf", &humHeight);
	printf("������� ��� � �� ����� ������ ��� � �������� � ������ ������ (����� �������!):");
	scanf("%lf", &humWeight);

	printf("������ ����� �������� �����: %.0lf\n\n", IndexMass(humHeight, humWeight));
	getch();
	system("cls");

	printf("������� �2\n");

	int a = 1, b = 3, c = 0, d = 5;
	printf("���� ����� a = %i, b = %i, c = %i, d = %i\n", a, b, c, d);

	printf("������������ �� ������� ����� �����: %i \n\n", MaxFour(a, b, c, d));
	getch();
	system("cls");

	printf("������� �3\n");

	int k = 5, f = 6;
	printf("k = %i, f = %i\n\n", k, f);

	printf("������ ������ � �������������� ��������� ������� ����������\n");
	Swap(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);
	
	printf("������ ������ ��� �������������� ������� ����������\n");
	SwapNotThree(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);

	return 0;
}