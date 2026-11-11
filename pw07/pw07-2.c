#include <stdio.h>

int main(void) //12 вариант
{
	int ch;
	int count=0;
	while ((ch = getchar()) != EOF)
	{
		for (int i = 2;i <= ch;i++)
		{
			if (ch == i)
			{
				count++;
			}
			else if (ch % i == 0)
			{
				break;
			}
		}
	}
	printf("%d", count);
	return 0;
}