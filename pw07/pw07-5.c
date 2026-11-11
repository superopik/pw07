#include <stdio.h>
int iter(int a)
{
	int sum=0;
	for (int i = 1;i <= a / 2;i++)
	{
		if (a % i == 0)
		{
			sum += i;
		}
	}
	if (sum == a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int rec(int a,int del)
{
	if (del > a / 2)
	{
		return 0;
	}
	int sum = rec(a, del + 1);
	if (a % del == 0)
	{
		return sum + del;
	}
	else
	{
		return sum;
	}
}
int soversh_rec(int a, int del)
{
	if (rec(a, del) == a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(void) //28 вариант
{
	int a;
	if (scanf("%9d", &a) == 1)
	{
		printf("%d\n", iter(a));
		printf("%d\n", soversh_rec(a,1));
	}
	return 0;
}