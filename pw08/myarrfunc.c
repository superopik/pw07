#include "myarrfunc.h"
size_t size_mas()
{
	size_t size;
	printf("Введите размер массива: ");
	if (scanf("%3zu", &size) == 1)
	{

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
	else
	{
		printf("Вы ввели неверный аргумент\n");
		return 0;
	}
	return 0;
}

int zapolnenie_massiva(int* mas, size_t size)
{
	printf("Введите %zu чисел\n", size);
	for (int i = 0;i < size;i++)
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
	return 1;
}

void predstavlenie_massiva(int* mas, size_t size)
{
	for (int i = 0;i < size;i++)
	{
		printf("%9d | %p\n", *(mas + i), (mas + i));
	}
}



int poisk_znach_posl_otric(int* mas, size_t size)
{
	int znach = 0; // int znach;
	for (int i = 0;i < size;i++)
	{
		if (*(mas + i) < 0)
		{
			znach = *(mas + i);
		}
	}
	if (znach < 0)
	{
		return znach;
	}
	return 0;
}

int poisk_summi_elementov_v_diapozone_znach_k_m(int* mas, size_t size, int k, int m)
{
	int summ = 0;
	for (int i = 0;i < size;i++)
	{
		if ((*(mas + i) >= k) && (*(mas + i) <= m))
		{
			summ += *(mas + i);
		}
	}
	return summ;
}

int kolich_elem_bolshe_sred(int* mas, size_t size)
{
	int summ = 0;
	int kol = 0;
	for (int i = 0;i < size;i++)
	{
		summ += *(mas + i);
	}
	int sred = summ / (int)size;
	for (int i = 0;i < size;i++)
	{
		if (*(mas + i) > sred)
		{
			kol++;
		}
	}
	return kol;
}