#include <stdio.h>
void change(int* a, int* b, int* c)
{
    int sred = *a + *b + *c;
	int max = *a;
    if (*b > max)
    {
        max = *b;
    }
    if (*c > max)
    {
        max = *c;
    }
    int min = *a;
    if (*b < min)
    {
        min = *b;
    }
    if (*c < min)
    {
        min = *c;
    }
    sred = sred -(max + min);
    *a = max;
    *b = min;
    *c = sred;
}
int main(void) //24 вариант
{
	int a, b, c;

	if (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		printf("%d %d %d\n", a, b, c);
		change(&a, &b, &c);
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}