#include <stdio.h>

int main(void){
	int i = 1, j = 7, k = 7, aux = 5;
	while(i <= 9){
		printf("I=%d J=%d\n", i, j);
		if(j == aux){	
			aux += 2;
			j += 5;
			i += 2;
		}
		j --;
	}



	return 0;
}