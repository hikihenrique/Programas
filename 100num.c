#include <stdio.h>

int main(){
	int a = 0, b = 0, i = 1;
	while(i <= 100){
		int num;
		scanf("%d", &num);
		if(num > a){
			a = num;
			b = i;
		}
		i ++;
	}
	printf("%d\n%d\n", a, b);

	return 0;
}