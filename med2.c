#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	double a, b, c, med;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	med = ((a * 2) + (b * 3) + (c * 5)) / 10;
	printf("MEDIA = %.1lf\n", med);
	return 0;
}