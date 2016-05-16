#include <stdio.h>

int main(){
	int a, b, soma = 0;
	scanf("%d%d", &a, &b);
	if(b < a){
		int swap = a;
		a = b;
		b = swap;
	}
	while(a <= b){
		if(a % 13 != 0){
			soma += a;
		}
		a ++;
	}
	printf("%d\n", soma);



	return 0;
}