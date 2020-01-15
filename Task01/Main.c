#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

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

void Func4(double a, double b, double c);
void Task04();
void Task03();
void Task02();
void Task01();
int Discriminant(double a, double b, double c);


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");

	Task01();

	Task02();

	Task03();

	Task04();

	return 0;
}

void Task01()
{
	/*
		1. ������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ���
		m-����� ���� � �����������, h - ���� � ������.
	*/
	printf("������� �1\n");
	double humHeight = 0;
	double humWeight = 0;
	printf("������� ���� � ����������� ��� ������ (����� �������!):");
	scanf("%lf", &humHeight);
	printf("������� ��� � �� ����� ������ ��� � �������� � ������ ������ (����� �������!):");
	scanf("%lf", &humWeight);

	printf("������ ����� �������� �����: %.0lf\n\n", IndexMass(humHeight, humWeight));

	getch();
	system("cls");
}

void Task02()
{
	/*
		2. ����� ������������ �� ������� �����. ������� �� ������������
	*/
	printf("������� �2\n");

	int a = 1, b = 3, c = 0, d = 5;
	printf("���� ����� a = %i, b = %i, c = %i, d = %i\n", a, b, c, d);

	printf("������������ �� ������� ����� �����: %i \n\n", MaxFour(a, b, c, d));

	getch();
	system("cls");
}

void Task03()
{
	/*
		3. �������� ��������� ������ ���������� ���� ������������� ����������:
		a. � �������������� ������� ����������;
		b. *��� ������������� ������� ����������.
	*/
	printf("������� �3\n");

	int k = 5, f = 6;
	printf("���� ����� k = %i, � f = %i\n\n", k, f);

	printf("������ ������ � �������������� ��������� ������� ����������\n");
	Swap(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);

	printf("������ ������ ��� �������������� ������� ����������\n");
	SwapNotThree(&k, &f);
	printf("k = %i, f = %i\n\n", k, f);
	getch();
	system("cls");
}

void Task04()
{
	/*
		4. �������� ��������� ���������� ������ ��������� ����������� ���������.
	*/

	printf("������� �4\n");
	printf("3x^2 - 4x + 1 = 0\n");		//	��� �����
	//printf("x^2 + 4x + 4 = 0\n");		//	���� ������
	//printf("x^2 + 6x + 45 = 0\n");	//	��� �������

	double a1 = 3, b1 = -4, c1 = 1;

	Func4(a1, b1, c1);
}

void Func4(double a, double b, double c)
{
	double x1;
	double x2;
	//	"3x^2 - 4x + 1 = 0";
	//	b^2 - 4ac	������� �������������
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

int Discriminant(double a, double b, double c)
{
	return pow(b, 2) - 4 * a * c;
}

