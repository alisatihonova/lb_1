﻿//Задание 4: написать программу, вычисляющую сумму значений в каждом столбце(или строке) двумерного массива.
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, j, sum;
	int arr[10][10];
	srand(time(NULL));

	printf("Программа вычисляет сумму значений в каждом столбце двумерного массива\n\nИсходный массив:\n");
	//Инициализация и вывод массива на экран
	printf("\t  1  \t  2  \t  3  \t  4  \t  5  \t  6  \t  7  \t  8  \t  9  \t  10  \n");
	printf("      ________________________________________________________________________________\n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d|", i+1);
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = rand() % 101;
			printf("\t%6d", arr[i][j]);
		}
		printf("\n");
	}

	//Подсчет суммы значений в каждом столбце
	printf("      ________________________________________________________________________________\n");
	printf("Cуммы:");
	for (j = 0; j < 10; j++)
	{
		sum = 0;
		for (i = 0; i < 10; i++)
			sum += arr[i][j];
		printf("\t%6d", sum);
	}
	getchar();
}

