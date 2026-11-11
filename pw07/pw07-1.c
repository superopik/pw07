#include <stdio.h>
int main(void) //20 вариант
{
	int ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch < 32)
		{
			ch = ' ';
		}
		putchar(ch);

	}
	return 0;
}