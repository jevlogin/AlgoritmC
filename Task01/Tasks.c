#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

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
	printf("������� ��� � �� ����� ������ ��� � ��������, ��� ������ ������ (����� �������!):");
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

	QuadraticEquation(a1, b1, c1);
}