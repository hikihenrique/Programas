#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *agrv[]){

	int a, b, c, d, dif;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	dif = (a * b) - (c * d);
	printf("DIFERENCA = %d\n", dif);
	return 0;

}	