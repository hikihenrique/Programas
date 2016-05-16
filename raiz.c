#include <stdio.h>

double raizq(double);

int main(void)
{

	double n;
	scanf("%lf", &n);
	double x1 ,x2;
	x1 = (n + (n / n)) / 2;
	while (x2 != x1){
		x2 = (x1 + (n / x1)) / 2;
		x1 = (x2 + (n / x2)) / 2;
	}
	printf("%.2lf\n", x1);
}
double raizq(double n)
{
	return 0.0;
}