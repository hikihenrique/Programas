#include <stdio.h>
#include <stdlib.h>

int main(void){

	char a;
	int b = 1;
	scanf("%c", &a);
	while(b < 150){
		printf("%c\n",a + b);
		b = b - 1;
	}
	return 0;


}