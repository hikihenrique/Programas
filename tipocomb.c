#include <stdio.h>

int main(){
	int a = 0, g = 0, d = 0;
	while(1 == 1){
		int in;
		scanf("%d", &in);
		if(in == 1){
			a += 1;
		}
		if(in == 2){
			g += 1;
		}
		if(in == 3){
			d += 1;
		}
		if(in == 4){
			goto s1;
		}
	}
	
	s1: printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);


	return 0;
}