#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]){

	int item, quant;
	double preco;
	scanf("%d %d", &item, &quant);
	if (item == 1){
		preco = quant * 4.0;
		printf("Total: R$ %.2lf\n", preco);
	}if (item == 2){
		preco = quant * 4.5;
		printf("Total: R$ %.2lf\n", preco);;
	}if (item == 3){
		preco = quant * 5.0;
		printf("Total: R$ %.2lf\n", preco);
	}if (item == 4){
		preco = quant * 2.0;
		printf("Total: R$ %.2lf\n", preco);
	}if (item == 5){
		preco = quant * 1.5;
		printf("Total: R$ %.2lf\n", preco); 
	}

	return 0;
}