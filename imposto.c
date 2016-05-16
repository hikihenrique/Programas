#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	double ren, imp;
	scanf("%lf", &ren);
	if(ren <= 2000){
		printf("Isento\n");
	}
	else{
		if(ren <= 3000){
			imp = (ren - 2000) * 0.08;
			printf("R$ %.2lf\n", imp);
		}
		if(ren > 3000 && ren <= 4500){
			imp = ((ren - 3000) * 0.18) + (((ren - 2000) - (ren - 3000)) * 0.08);
			printf("R$ %.2lf\n", imp);
		}
		if(ren > 4500){
			imp = ((ren - 4500) * 0.28) + (((ren - 3000) - (ren - 4500)) * 0.18) + (((ren - 2000) - (ren - 3000) ) * 0.08);
			printf("R$ %.2lf\n" ,imp);
		}
	}
	return 0;

}