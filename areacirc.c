#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *agrv[]){

	double a, pi = 3.14159, r;
	scanf("%lf", &r);
	a = (r * r) * pi;
	printf("A=%.4lf\n", a);
	return 0;

}