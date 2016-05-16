#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int a;
	double b, c;
	scanf("%d", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2lf\n", b * c);
	return 0;

}
