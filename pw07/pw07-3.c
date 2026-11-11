#include <stdio.h>
#include <math.h>

double tg_proizved(double a, double b);
int main(void) //18 вариант
{
	double a, b;
	int count = 0;
	while ((scanf("%lf %lf",&a,&b)==2))
	{
		printf("%.4lf\n", tg_proizved(a,b));
	}
	return 0;
}
double tg_proizved(double a,double b)
{
	return tan(a*b);
}