#include "myarrfunc.h"
size_t size_mas()
{
	size_t size;
	int check;
	int c;
	printf("Введите размер массива: ");
	if ((check=scanf("%3zu", &size)) == 1)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		if (size > 0)
		{
			return size;
		}
		else
		{
			printf("Вы ввели неверный размер\n");
			return 0;
		}
	}
	else if (check==0)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		printf("Вы ввели неверный аргумент\n");
		return 0;
	}
	else
	{
		while ((c = getchar()) != '\n' && c != EOF);
		return 0;
	}
	return 0;
}

int zapolnenie_massiva(int* mas, size_t size)
{
	int c;
	printf("Введите %zu чисел\n", size);
	for (size_t i = 0;i < size;i++)
	{
		if ((scanf("%9d", (mas + i)) != 1))
		{
			printf("Вы ввели не число, массив будет дозаполнен 0\n");
			for (int j = i;j < size;j++)
			{
				*(mas + j) = 0;
			}
			
			break;
		}
	}
	while ((c = getchar()) != '\n' && c != EOF);
	return 1;
}

void predstavlenie_massiva(int* mas, size_t size)
{
	int c;
	for (size_t i = 0;i < size;i++)
	{
		printf("%9d | %p\n", *(mas + i), (mas + i));
	}
	while ((c = getchar()) != '\n' && c != EOF);
}



int poisk_znach_posl_otric(int* mas, size_t size)
{
	int c;
	int znach = 0; // int znach;
	for (int i = 0;i < size;i++)
	{
		if (*(mas + i) < 0)
		{
			znach = *(mas + i);
		}
	}
	while ((c = getchar()) != '\n' && c != EOF);
	if (znach < 0)
	{
		return znach;
	}
	return 0;
}

int poisk_summi_elementov_v_diapozone_znach_k_m(int* mas, size_t size)
{
	int summ = 0;
	int k, m;
	int c;
	printf("Введите значение k и m: ");
	if ((scanf("%9d", &k) == 1) && (scanf("%9d", &m) == 1))
	{
		if (k <= m)
		{
			for (size_t i = 0;i < size;i++)
			{
				if ((*(mas + i) >= k) && (*(mas + i) <= m))
				{
					summ += *(mas + i);
				}
			}
		}
		else
		{
			printf("k не может быть меньше m\n");
			return 0;
		}
	}
	else
	{
		printf("Вы ввели неверное значение\n");
		while ((c = getchar()) != '\n' && c != EOF);
		return 0;
	}
	while ((c = getchar()) != '\n' && c != EOF);
	return summ;
}

int kolich_elem_bolshe_sred(int* mas, size_t size)
{
	int summ = 0;
	int kol = 0;
	int c;
	for (size_t i = 0;i < size;i++)
	{
		summ += *(mas + i);
	}
	int sred = summ / (int)size;
	for (size_t i = 0;i < size;i++)
	{
		if (*(mas + i) > sred)
		{
			kol++;
		}
	}
	while ((c = getchar()) != '\n' && c != EOF);
	return kol;
}