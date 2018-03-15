#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int n, exit;
	do
	{
		printf("please enter number of a task?: ");
		scanf("%hu", &n);
		switch (n)
		{
		case 1:
		{
			/*1.���� ��� �������, ������������� �� �����������: �[n] � B[m].
			����������� ������ C[n+m], ��������� �� ��������� �������� � � �, ������������� �� ����������� (������ � �� ������ �������������).*/
			int A[10];
			int B[10];
			int C[10];
			int row = 10;
			ZappMass(A, &row);
			ZappMass(B, &row);
			SortingMass(A, &row);
			SortingMass(B, &row);
			PrintMass(A, &row);
			PrintMass(B, &row);
			SummMass(A, B, C, &row);
			PrintMass(C, &row);
		}
		break;
		case 2:
		{
			/*2.���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� ����� �������� ���� ��������.*/
			int A[10];
			int B[10];
			int C[10];
			int row = 10;
			ZappMass(A, &row);
			ZappMass(B, &row);
			PrintMass(A, &row);
			PrintMass(B, &row);
			copyGeneralElements(A, B, C, &row);
			PrintMass(C, &row);
		}
		break;
		case 3:
		{
			/*3.���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� ������� A, ������� �� ���������� � B.*/
			int A[10];
			int B[10];
			int C[10];
			int row = 10;
			ZappMass(A, &row);
			ZappMass(B, &row);
			PrintMass(A, &row);
			PrintMass(B, &row);
			copyNoGeneralElements(A, B, C, &row);
			PrintMass(C, &row);
		}
		break;
		case 4:
		{
			/*4.���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� ������� B, ������� �� ���������� � A.*/
			int A[10];
			int B[10];
			int C[10];
			int row = 10;
			ZappMass(A, &row);
			ZappMass(B, &row);
			PrintMass(A, &row);
			PrintMass(B, &row);
			copyNoGeneralElements_2(A, B, C, &row);
			PrintMass(C, &row);
		}
		break;
		case 5:
		{
			/*5.���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.*/
			int A[10];
			int B[10];
			int C[20];
			int row = 10;
			int row2 = 20;
			ZappMass(A, &row);
			ZappMass(B, &row);
			PrintMass(A, &row);
			PrintMass(B, &row);
			copyGeneralElements_2(A, B, C, &row);
			PrintMass(C, &row2);
		}
		break;
		case 6:
		{
			/*1.*�������� �������, ������� ��������� ���������� ������ ����� ����� � ��������� ��� ���������� �������.*/
			int a[10];
			int row = 10;
			ZappMass(a, &row);
		}
		break;
		case 7:
		{
			/*2.*�������� �������, ������� ��������� ����� � ���������� ������, ���� ����� ������ � ����, ���� ��������.*/
			int a;
			printf("������� �����: ");
			scanf("%d", &a);

			printf("%d\n", FalseTrue(&a));
		}
		break;
		case 8:
		{
			/*3.**�������� �������, ������� ���������� ������, ���� ���������� ����� �������, � ����, ���� �� �������.
			������� ����� � ��� �����, ������� �������� ������ �� 1 � �� ���� (2, 5, 7, 11 � �.�.).*/
			int a;
			printf("������� �����: ");
			scanf("%d", &a);
			printf("%d\n", False_True2(&a));
		}
		break;
		case 9:
		{
			/*4.***����� ���������� �����������, ���� ����� ���� ��� ��������� ����� ��� ������. �������� ������� ������ ����� ����� �� ��������� ���������.*/
			int start;
			int end;
			printf("������� ������ ���������: ");
			scanf("%d", &start);
			printf("������� ����� ���������: ");
			scanf("%d", &end);
			printf("\n");
			Sovershennoe_Number(&start, &end);
		}
		break;
		case 10:
		{
			/*5.**�������� �������, ������� ���������� ������, ���� ���������� �������� �������� ���������-�������� � ����, ���� �� ��������.*/
			char symvol;
			printf("������� ������: ");
			scanf("%c", &symvol);//�� ��������� ��������
			printf("\n%c\n", symbol(&symvol));
		}
		break;
		case 11:
		{
			/*6.**�������� �������, ������� ��������� ���������� ������ ����� ����� � ���������� �������� ������������� ����� � ���� �������.*/
			int mas[10];
			int row = 10;
			ZappMass(mas, &row);
			PrintMass(mas,&row);
			printf("\n ������������ ����� � ������� = %d \n", max(mas, &row));
		}
		break;
		case 12:
		{
			//7.**�������� �������, ������� ��������� ��� ������� ����� �����.��������� ������������ �������� ��������� ������ ���� ��������, � ��������� ������� � ������ ������.
			int A[10];
			int B[10];
			int C[10];
			int row = 10;
			ZappMass(A, &row);
			ZappMass(B, &row);
			PrintMass(A, &row);
			PrintMass(B, &row);
			SummMass(A, B, C, &row);
			PrintMass(C, &row);
		}
		break;
		case 13:
		{
			/*8.**�������� �������, ������� ��������� ����� ������������ ����� � ��������� ����� �� ����� ������ ���� ���� ����� ��������� ���� ����(���������� �����).
			������� ���������� ������, ���� ����� ���������� (����� �����) � ����, ���� �� ���������� (����� �� �����).*/
			int bil;
			printf("������� ����� ������: ");
			scanf("%d", &bil);
			printf("\n %d \n",bilet(&bil));
		}
		break;
		default:printf("There is no task! Please enter number of a task\n");
			break;
		}
		printf("To continue? 1-Yes 2-No: ");
		scanf("%hu", &exit);
		printf("\n");
	} while (exit == 1);
}