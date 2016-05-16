#include <stdio.h>

int main(){

	int quant, i = 0;
	scanf("%d", &quant);
	while(i < quant){
		int a;
		scanf("%d", &a);
		if (a == 0){
			printf("NULL\n");
		}
		if((a % 2) == 0){
			if(a > 0){
				printf("EVEN POSITIVE\n");
			}
			if(a < 0){
				printf("EVEN NEGATIVE\n");
			}
		}
		else{
			if (a > 0){
				printf("ODD POSITIVE\n");
			}
			if (a < 0){
				printf("ODD NEGATIVE\n");
			}

	}


	return 0;
}