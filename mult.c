#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int a, b;
	printf("Digite um número: \n");
	scanf("%d", &a);
	printf("Digite outro número: \n");
	scanf("%d", &b);
	printf("A multiplicaçao de %d por %d é igual a: %d\n", a, b, a*b);
	return 0;

}