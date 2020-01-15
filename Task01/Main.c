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
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");

	double humHeight = 0;
	double humWeight = 0;
	printf("������� ���� � �����������:");
	scanf("%lf", &humHeight);
	printf("������� ���:");
	scanf("%lf", &humWeight);

	printf("������ ����� �������� �����: %.0lf", IndexMass(humHeight, humWeight));

	return 0;
}