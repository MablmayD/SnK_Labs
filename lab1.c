// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 

#define N 5
#define M 5

void process(int n, int m, int matrix[M][N], int* result)
{
	int i = 0, j = 0;
	*result = 0;
	while (i < n && j < m)
	{
		*result += matrix[i][j];
		i++;
		j++;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int matrix[M][N];
	int result;
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			scanf("%d", &matrix[i][j]);
		}
	}
	process(N, M, matrix, &result);

	printf("\nСумма элементов главной диагонали матрицы: %d \n", result);

	return 0;
}


