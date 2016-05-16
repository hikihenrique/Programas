#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int cod_1, cod_2, quant_1, quant_2;
	double val_1, val_2, preco;
	scanf("%d", &cod_1);
	scanf("%d", &quant_1);
	scanf("%lf", &val_1);
	scanf("%d", &cod_2);
	scanf("%d", &quant_2);
	scanf("%lf", &val_2);
	printf("VALOR A PAGAR: R$ %.2lf\n", ((quant_1 * val_1)+(quant_2 * val_2)));
	return 0;
}
