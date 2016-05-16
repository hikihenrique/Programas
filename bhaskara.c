#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int agrc, char *argv[]){

	float a, b, c, delt, x1, x2;
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0){
		printf("Impossivel calcular\n");
	}else{
		delt = pow(b, 2) - (4 * a * c);
		//printf("%f\n", delt);
		//printf("%f\n", sqrt(delt));
		if (delt < 0){
			printf("Impossivel calcular\n");
		}else{
			x2 = (-b - (sqrt(delt))) / (2 * a);
			x1 = (-b + (sqrt(delt))) / (2 * a);
			printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
		}
	}

	return 0;
}