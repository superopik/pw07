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
		printf("\na   Çŕäŕňü đŕçěĺđ ěŕńńčâŕ\nb   Çŕďîëíčňü ěŕńńčâ\nc   Ďđĺäńňŕâëĺíčĺ ěŕńńčâŕ(çíŕ÷ĺíč˙, ŕäđĺńŕ)\nd   poisk_znach_posl_otric\ne   poisk_summi_elementov_v_diapozone_znach_k_m\nf   kolich_elem_bolshe_sred\ng   Âűőîä\nÂűáĺđĺňĺ ďóíęň: ");
		ch = getchar();
		if (ch != EOF)
		{
			switch (ch)
			{
			case 'a':
			{
				size = size_mas();
				if (getchar() == EOF)
				{
					flag = 0;
					break;
				}
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
					printf("Âű íĺ ââĺëč đŕçěĺđ ěŕńńčâŕ\n");
				}
				if (getchar() == EOF)
				{
					flag = 0;
					break;
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
					printf("Âű íĺ ââĺëč đŕçěĺđ ěŕńńčâŕ, čëč íĺ çŕďîëíčëč ĺăî\n");
				}
				if (getchar() == EOF)
				{
					flag = 0;
					break;
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
					printf("Âű íĺ ââĺëč đŕçěĺđ ěŕńńčâŕ, čëč íĺ çŕďîëíčëč ĺăî\n");
				}
				if (getchar() == EOF)
				{
					flag = 0;
					break;
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
					printf("Ââĺäčňĺ çíŕ÷ĺíčĺ k č m: ");
					if (((scanf("%9d", &k)==1) && k!=EOF) && ((scanf("%9d", &m) == 1) && m != EOF))
					{
						if (getchar() == EOF)
						{
							flag = 0;
							break;
						}
						while (getchar() != '\n')
						{

						}
						if (k <= m)
						{
							printf("%d\n", poisk_summi_elementov_v_diapozone_znach_k_m(mas, size, k, m));
						}
						else
						{
							printf("k íĺ ěîćĺň áűňü ěĺíüřĺ m");
						}
					}
					break;
				}
				else
				{
					printf("Âű íĺ ââĺëč đŕçěĺđ ěŕńńčâŕ, čëč íĺ çŕďîëíčëč ĺăî\n");
				}
				if (getchar() == EOF)
				{
					flag = 0;
					break;
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
					printf("Âű íĺ ââĺëč đŕçěĺđ ěŕńńčâŕ, čëč íĺ çŕďîëíčëč ĺăî\n");
				}
				if (getchar() == EOF)
				{
					flag = 0;
					break;
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
				printf("Âű ââĺëč íĺâĺđíűé ńčěâîë, ďđîăđŕěěŕ áóäĺň çŕâĺđřĺíŕ\n");
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
