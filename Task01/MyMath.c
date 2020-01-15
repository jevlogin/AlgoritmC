#include "Header.h"
#include <math.h>

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

void Swap(int* k, int* f)
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

int Discriminant(double a, double b, double c)
{
	//	b^2 - 4ac	������� �������������
	return pow(b, 2) - 4 * a * c;
}
void QuadraticEquation(double a, double b, double c)
{
	double x1;
	double x2;

	int d = Discriminant(a, b, c);
	printf("������������ ����� %i\n", d);

	if (d < 0)
	{
		printf("������ ����������� ��������� ���. ������������ ������ ����.\n");
	}
	else if (d == 0)
	{
		printf("���� ���� ������ ����������� ���������.\n");
		x1 = -b / 2 * a;
		printf("x1 = %.2f\n", x1);
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);	//	���� �� �������� � ������ (2 * a) �������� ���������� �� �����! �� ���� ������!!!
		x2 = (-b - sqrt(d)) / (2 * a);	//	���� �� �������� � ������ (2 * a) �������� ���������� �� �����! �� ���� ������!!!
		printf("� ������� ��� ����� ����������� ���������. x1 = %.2f, x2 = %.2f\n", x1, x2);
	}

}