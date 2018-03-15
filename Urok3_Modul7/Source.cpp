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
			/*1.Даны два массива, упорядоченных по возрастанию: А[n] и B[m].
			Сформируйте массив C[n+m], состоящий из элементов массивов А и В, упорядоченный по возрастанию (Массив С не должен сортироваться).*/
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
			/*2.Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать общие элементы двух массивов.*/
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
			/*3.Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массива A, которые не включаются в B.*/
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
			/*4.Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массива B, которые не включаются в A.*/
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
			/*5.Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массивов A и B, которые не являются общими для них.*/
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
			/*1.*Напишите функцию, которая принимает одномерный массив целых чисел и заполняет его случайными числами.*/
			int a[10];
			int row = 10;
			ZappMass(a, &row);
		}
		break;
		case 7:
		{
			/*2.*Напишите функцию, которая принимает число и возвращает истину, если число четное и ложь, если нечетное.*/
			int a;
			printf("введите число: ");
			scanf("%d", &a);

			printf("%d\n", FalseTrue(&a));
		}
		break;
		case 8:
		{
			/*3.**Написать функцию, которая возвращает истину, если переданное число простое, и ложь, если не простое.
			Простое число – это число, которое делиться ТОЛЬКО на 1 и на себя (2, 5, 7, 11 и т.д.).*/
			int a;
			printf("введите число: ");
			scanf("%d", &a);
			printf("%d\n", False_True2(&a));
		}
		break;
		case 9:
		{
			/*4.***Число называется совершенным, если сумма всех его делителей равна ему самому. Напишите функцию поиска таких чисел во введенном интервале.*/
			int start;
			int end;
			printf("введите начало дивпозона: ");
			scanf("%d", &start);
			printf("введите конец диапозона: ");
			scanf("%d", &end);
			printf("\n");
			Sovershennoe_Number(&start, &end);
		}
		break;
		case 10:
		{
			/*5.**Написать функцию, которая возвращает истину, если переданный параметр является алфавитно-цифровым и ложь, если не является.*/
			char symvol;
			printf("введите символ: ");
			scanf("%c", &symvol);//не принимает значение
			printf("\n%c\n", symbol(&symvol));
		}
		break;
		case 11:
		{
			/*6.**Написать функцию, которая принимает одномерный массив целых чисел и возвращает значения максимального числа в этом массиве.*/
			int mas[10];
			int row = 10;
			ZappMass(mas, &row);
			PrintMass(mas,&row);
			printf("\n максимальное число в массиве = %d \n", max(mas, &row));
		}
		break;
		case 12:
		{
			//7.**Напишите функцию, которая принимает три массива целых чисел.Выполнить поэлементное сложение элементов первых двух массивов, и результат занести в третий массив.
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
			/*8.**Написать функцию, которая принимает целое шестизначное число и проверяет равна ли сумма первых трех цифр сумме последних трех цифр(счастливый билет).
			Функция возвращает истину, если число счастливое (суммы равны) и ложь, если не счастливое (суммы не равны).*/
			int bil;
			printf("введите номер билета: ");
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