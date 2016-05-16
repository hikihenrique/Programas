#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]){

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b ,&c);
	if (a < b + c){
		if (b < c + a){
			if(c < a + b){
				double per = a + b + c;
				printf("Perimetro = %.1lf\n", per);
				return 0;
			}
		}
	}
	double area = ((a + b) * c) / 2;
	printf("Area = %.1lf\n",area);
	


	return 0;
}