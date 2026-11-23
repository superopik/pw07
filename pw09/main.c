#include "matrixfunc.h"
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int flag = 1;
	int ch;
	int matrix[100][100];
	int zapolnena=0;
	size_t rows=0;
	size_t cols=0;
	int summ[100];
	while (flag)
	{
		printf("\na   Задать размер матрицы (строки, столбцы)\nb   Заполнить матрицу\nc   Представление матрицы(значения, адреса)\nd   summa_elem_kajdoi_stroki_matrici\ne   kolichestvo_elementov_bolshe_k()\nf   znach_poslednego_otric_elem_matrici_pri_obhode_po_strokam\ng   Выход\nВыберете пункт: ");
		ch = getchar();
		if (ch != EOF)
		{
			switch (ch)
			{
			case 'a':
			{
				size_mat(&rows, &cols);
				printf("%zu %zu\n", rows, cols);
				break;
			}
			case 'b':
			{
				if (rows > 0 && cols > 0)
				{
					zapolnena = zapolnenie_matrici(matrix, rows, cols);
				}
				else
				{
					printf("Вы не ввели размер матрицы\n");
				}
				break;
			}
			case 'c':
			{
				if (zapolnena)
				{
					predstavlenie_marici(matrix, rows, cols);
				}
				else
				{
					printf("Вы не заполнили матрицу\n");
				}
				break;
			}
			case 'd':
			{
				if (zapolnena)
				{
					summa_elem_kajdoi_stroki_matrici(matrix, summ, rows, cols);
					for (int i = 0;i < rows;i++)
					{
						printf("Сумма %d строки: %d\n",i+1, *(summ + i));
					}
				}
				else
				{
					printf("Вы не заполнили матрицу\n");
				}
				break;
			}
			case 'e':
			{
				if (zapolnena)
				{
					int k;
					int c;
					printf("Введите k: ");
					if (scanf("%9d", &k) == 1)
					{
						int count = kolichestvo_elementov_bolshe_k(matrix, k, rows, cols);
						printf("%d", count);
					}
					else
					{
						printf("Вы ввели неверное значение\n");
						while ((c = getchar()) != '\n' && c != EOF);
					}
				}
				else
				{
					printf("Вы не заполнили матрицу");
				}
				break;
			}
			case 'f':
			{
				if (zapolnena)
				{
					int znach = znach_poslednego_otric_elem_matrici_pri_obhode_po_strokam(matrix, rows, cols);
					printf("%d", znach);
				}
				else
				{
					printf("Вы не заполнили матрицу");
				}
				break;
			}
			case 'g':
			{
				flag = 0;
				break;
			}
			default:
			{
				printf("Вы ввели неверный символ, программа будет завершена\n");
				flag = 0;
				break;
			}
			}
		}
		else
		{
			flag = 0;
		}

	}
	return 0;
}
