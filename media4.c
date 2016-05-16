#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]){

	double a, b, c, d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	double med = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10;
	printf("Media: %lf\n", med);
	if (med >= 5 && med <= 7){
		printf("Aluno em exame.\n");
		double nex, notaf;
		scanf("%lf", &nex);
		notaf = (med + nex) / 2;
		printf("Nota do exame: %lf\n", nex);
		if (notaf >= 5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}printf("Media final: %lf\n", notaf);
	}if (med >= 7){
		printf("Aluno aprovado.\n");
	}if (med < 5){
		printf("Aluno reprovado.\n");
	}

	return 0;
}