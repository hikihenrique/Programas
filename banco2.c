#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int a, ano, mes, dia;
	scanf("%d", &a);
	if (a >= 365){
		ano = a / 365;
		a %= 365;
	}else{
		ano = 0;
	}if(a >= 30){
		mes = a / 30;
		a %= 30;
	}else{
		mes = 0;
	}if(a > 0){
		dia = a;
	}else{
		dia = 0;
	}
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	return 0;
}