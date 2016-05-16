#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	double a, n;
	int p;
	scanf("%lf", &a);
	if (a <= 400){
		p = 15;
		n = a * (p / 100.0);
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", n + a, n, p);
	}
	if (a > 400 && a <= 800){
		p = 12;
		n = a * (p / 100.0);
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", n + a, n, p);
	}
	if (a > 800 && a <= 1200){
		p = 10;
		n = a * (p / 100.0);
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", n + a, n, p);
	}
	if (a > 1200 && a <= 2000){
		p = 7;
		n = a * (p / 100.0);
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", n + a, n, p);
	}
	if (a > 2000){
		p = 4;
		n = a * (p / 100.0);
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", n + a, n, p);
	}

	return 0;
}