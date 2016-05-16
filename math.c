#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]){

	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	if (a > b){
		if (a > c){
			if (b > c){
				printf("%d\n%d\n%d\n", c, b, a);
			}
			else{
				printf("%d\n%d\n%d\n", b, c, a);
			}
		}
		else{
			printf("%d\n%d\n%d\n", b, a, c);
		}
		goto s1;
	}
	if (b > a){
		if (b > c){
			if (c > a){
				printf("%d\n%d\n%d\n", a, c, b);
			}
			else{
				printf("%d\n%d\n%d\n", c, a ,b);
			}
		}
		else{
			printf("%d\n%d\n%d\n", a, b, c);
		}
		goto s1;
	}
	if (c > a){
		if (c > b){
			if (b > a){
				printf("%d\n%d\n%d\n", a, b, c);
			}
			else{
				printf("%d\n%d\n%d\n", b, a, c);
			}
		}
		else{
			printf("%d\n%d\n%d\n", a, c, b);
		}
		goto s1;
	}
	if (a == b){
		if (a == c){
			printf("%d\n%d\n%d\n", c, a, b);
		}
		if (a > c){
			printf("%d\n%d\n%d\n", c, a, b);
		}
		else{
			printf("%d\n%d\n%d\n", b, a, c);
		}
		goto s1;
	}
	if (a == c){
		if (a > b){
			printf("%d\n%d\n%d\n", b, a, c);
		}
		else{
			printf("%d\n%d\n%d\n", a, c, b);
		}
		goto s1;
	}
	if (b == c){
		if (b > a){
			printf("%d\n%d\n%d\n", a, b, c);
		}
		else{
			printf("%d\n%d\n%d\n", b, c, a);
		}
		goto s1;
	}


	
	s1: printf("\n%d\n%d\n%d\n", a, b, c);

	return 0;
}