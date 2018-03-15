#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

int i, j;
void ZappMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		*(mass + i) = 0 + rand() % 20;
}
void PrintMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		printf("%d\t", *(mass + i));
	printf("\n--------------------------------------\n");
}
void SortingMass(int *mass, int *row)
{
	int m;
	for (i = 0;i < *row;i++)
	{
		for (j = *row - 1;j >= i;j--)
		{
			if (*(mass + j) < *(mass + (j - 1)))
			{
				m = *(mass + j);
				*(mass + j) = *(mass + (j - 1));
				*(mass + (j - 1)) = m;
			}
		}
	}
}
void SummMass(int *mass1, int *mass2, int *mass3, int *row)
{
	for (i = 0;i < *row;i++)
		*(mass3 + i) = *(mass1 + i) + *(mass2 + i);
}
void copyGeneralElements(int *mass1, int *mass2, int *mass3, int *row)
{
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *row;j++)
		{
			if (*(mass1 + i) == *(mass2 + j))
			{
				*(mass3 + i) = *(mass1 + i);
			}
			else
				*(mass3 + i) = 0;
		}
	}
}
void copyNoGeneralElements(int *mass1, int *mass2, int *mass3, int *row)
{
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *row;j++)
		{
			if (*(mass1 + i) == *(mass2 + j))
			{
				*(mass3 + i) = 0;
			}
			else
				*(mass3 + i) = *(mass1 + i);
		}
	}
}
void copyNoGeneralElements_2(int *mass1, int *mass2, int *mass3, int *row)
{
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *row;j++)
		{
			if (*(mass2 + i) == *(mass1 + j))
			{
				*(mass3 + i) = 0;
			}
			else
				*(mass3 + i) = *(mass2 + i);
		}
	}
}
void copyGeneralElements_2(int *mass1, int *mass2, int *mass3, int *row)
{
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *row;j++)
		{
			if (*(mass1 + i) == *(mass2 + j))
			{
				*(mass3 + i) = 0;
			}
			else
			{
				*(mass3 + i) = *(mass1 + i);
				*(mass3 + (i + 1)) = *(mass2 + j);

			}

		}
	}
}
int FalseTrue(int *a)
{
	if (*a % 2 == 0)
		return true;
	else
		return false;
}
int False_True2(int*a)
{

	for (i = 2;i < *a;i++)
	{
		if (*a%i == 0)
			return false;
	}
	return true;
}
void Sovershennoe_Number(int *start, int *end)
{
	int summ = 0;
	for (i = *start;i <= *end;i++)
	{
		summ = 0;
		for (j = 1;j < i;j++)
		{
			if (i%j == 0)
				summ += j;
			/*	if (summ > i)
					break;*/
		}
		if (summ == i)
			printf("%d число совершенное\n", summ);
	}
}
char symbol(char *symvol)
{
	char symbol[37] = { "zxcvbnmasdfghjklqwertyuiop1234567890" };
	for (i = 0;i < 37;i++)
	{
		if (*symvol == *(symbol + i))
			return true;
		else
			return false;
	}
}
int max(int *mas, int *row)
{
	int max = *mas;
	for (i = 0;i < *row;i++)
	{
		if (max < *(mas + i))
			max = *(mas + i);
	}
	return max;
}
int bilet(int *bil)
{
	int a, b, c, d, e, f;
	a = *bil / 100000;
	*bil -= a * 100000;
	b = *bil / 10000;
	*bil -= b * 10000;
	c = *bil / 1000;
	*bil -= c * 1000;
	d = *bil / 100;
	*bil -= c * 100;
	e = *bil / 10;
	f = *bil % 10;
	if ((a + b + c) == (d + e + f))
		return true;
	else
		return false;
}