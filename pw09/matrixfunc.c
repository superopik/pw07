#include "matrixfunc.h"
void size_mat(size_t* rows, size_t* cols)
{
	int check;
	int c;
	size_t size_r;
	size_t size_c;
	printf("Введите количество строк матрицы: ");
	if ((check = scanf("%2zu", &size_r)) == 1)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		if (size_r > 0 && size_r <100)
		{
			*rows = size_r;
		}
		else
		{
			printf("Вы ввели неверный размер\n");
			*rows = 0;

		}

	}
	else if (check == 0)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		printf("Вы ввели неверный аргумент\n");
		*rows = 0;
	}
	else
	{
		while ((c = getchar()) != '\n' && c != EOF);
		*rows = 0;
	}
	printf("Введите количество столбцов матрицы: ");
	if ((check = scanf("%2zu", &size_c)) == 1)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		if (size_c > 0 && size_c < 100)
		{
			*cols = size_c;
		}
		else
		{
			printf("Вы ввели неверный размер\n");
			*cols = 0;
		}
	}
	else if (check == 0)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		printf("Вы ввели неверный аргумент\n");
		*cols = 0;
	}
	else
	{
		while ((c = getchar()) != '\n' && c != EOF);
		*cols = 0;
	}
}

int zapolnenie_matrici(int (*matrix)[100], size_t rows, size_t cols)
{
	int c;
	int num;
	printf("Введите %zu чисел\n", rows*cols);
	for (size_t i = 0;i < rows;i++)
	{
		for (size_t j = 0;j < cols;j++)
		{
			if ((scanf("%9d", &num) == 1))
			{
				*(*(matrix + i) + j) = num;
			}
			else
			{
				while ((c = getchar()) != '\n' && c != EOF);
				*(*(matrix + i) + j) = 0;
			}
		}

	}
	while ((c = getchar()) != '\n' && c != EOF);
	return 1;
}

void predstavlenie_marici(int (*matrix)[100], size_t rows, size_t cols)
{
	int c;
	for (size_t i = 0;i < rows;i++)
	{
		for (size_t j = 0;j < cols;j++)
		{
			printf("%9d | %p \n", *(*(matrix + i) + j), *(matrix + i) + j);
		}
	}
	while ((c = getchar()) != '\n' && c != EOF);
}

void summa_elem_kajdoi_stroki_matrici(int (*matrix)[100], int *summ,size_t rows,size_t cols)
{
	int c;
	for (size_t i = 0;i < rows;i++)
	{
		int sum = 0;
		for (size_t j = 0;j < cols;j++)
		{
			sum += *(*(matrix + i) + j);
		}
		*(summ + i) = sum;
	}
	while ((c = getchar()) != '\n' && c != EOF);
}

int kolichestvo_elementov_bolshe_k(int (*matrix)[100], int k, size_t rows, size_t cols)
{
	int c;
	int count=0;
	for (size_t i = 0;i < rows;i++)
	{
		for (size_t j = 0;j < cols;j++)
		{
			if ( *(*(matrix + i) + j) > k)
			{
				count++;
			}
		}
	}
	while ((c = getchar()) != '\n' && c != EOF);
	return count;
}
int znach_poslednego_otric_elem_matrici_pri_obhode_po_strokam(int (*matrix)[100], size_t rows, size_t cols)
{
	int c;
	int znach = 0;
	for (size_t i = 0;i < rows;i++)
	{
		for (size_t j = 0;j < cols;j++)
		{
			if (*(*(matrix + i) + j) < 0)
			{
				znach = *(*(matrix + i) + j) < 0;
			}
		}
	}
	while ((c = getchar()) != '\n' && c != EOF);
	return znach;
}