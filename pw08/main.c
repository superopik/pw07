#include "myarrfunc.h"


int main(void)
{
	int flag = 1;
	int ch;
	size_t size=0;
	int mas[1000];
	int zapolnen = 0;

	while (flag)
	{
		printf("\na   Задать размер массива\nb   Заполнить массив\nc   Представление массива(значения, адреса)\nd   poisk_znach_posl_otric\ne   poisk_summi_elementov_v_diapozone_znach_k_m\nf   kolich_elem_bolshe_sred\ng   Выход\nВыберете пункт: ");
		ch = getchar();
		if (ch != EOF)
		{
			switch (ch)
			{
			case 'a':
			{
				size = size_mas();
				while (getchar() != '\n')
				{

				}
				break;
			}
			case 'b':
			{
				if (size > 0)
				{
					zapolnen=zapolnenie_massiva(mas, size);
				}
				else
				{
					printf("Вы не ввели размер массива\n");
				}
				while (getchar() != '\n')
				{

				}
				break;
			}
			case 'c':
			{
				if (size > 0 && zapolnen>0)
				{
					predstavlenie_massiva(mas, size);
				}
				else
				{
					printf("Вы не ввели размер массива, или не заполнили его\n");
				}
				while (getchar() != '\n')
				{

				}
				break;
			}
			case 'd':
			{
				if (size > 0 && zapolnen > 0)
				{
					printf("%d\n",poisk_znach_posl_otric(mas, size));

				}
				else
				{
					printf("Вы не ввели размер массива, или не заполнили его\n");
				}
				while (getchar() != '\n')
				{

				}
				break;
			}
			case 'e':
			{
				if (size > 0 && zapolnen > 0)
				{
					int k, m;
					printf("Введите значение k и m: ");
					if (((scanf("%9d", &k)==1) && k!=EOF) && ((scanf("%9d", &m) == 1) && m != EOF))
					{
						while (getchar() != '\n')
						{

						}
						if (k <= m)
						{
							printf("%d\n", poisk_summi_elementov_v_diapozone_znach_k_m(mas, size, k, m));
						}
						else
						{
							printf("k не может быть меньше m");
						}
					}
					break;
				}
				else
				{
					printf("Вы не ввели размер массива, или не заполнили его\n");
				}
				while (getchar() != '\n')
				{

				}
				break;
			}
			case 'f':
			{
				if (size > 0 && zapolnen> 0)
				{
					printf("%d\n", kolich_elem_bolshe_sred(mas, size));
				}
				else
				{
					printf("Вы не ввели размер массива, или не заполнили его\n");
				}
				while (getchar() != '\n')
				{

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