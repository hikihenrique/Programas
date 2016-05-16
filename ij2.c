#include <stdio.h>

int main(void){
	int i = 1, j = 7, k = 1;
	while(i <= 9){
		printf("I=%d J=%d\n", i, j);
		if(j == 5){
			j += 3;
			i += 2;
		}
		j --;
	}



	return 0;
}