#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	double a, b, c, A;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (b > a){
		if (b > c){
			A = b;
			b = a;
			
			goto s1;
		}else{
			A = c;
			c = b;
			b = a;
			
			goto s1;
		}
	}
	if (c > a){
		if (c > b){
			A = c;
			c = b;
			b = a;
			
			goto s1;
		}else{
			A = b;
			b = a;
			
			goto s1;
		}
	}
	if (a == b || a == c){
			A = a;
			
			goto s1;
	}
		
	

	
	s1:if ((A >= (b + c) || A < 0)){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	if (A * A == (b * b + c * c)){
		printf("TRIANGULO RETANGULO\n");
	}
	if (A * A > (b * b + c * c)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if (A * A < (b * b + c * c)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if (A == b && b == c){
		printf("TRIANGULO EQUILATERO\n");
	}
	if ((A == b && A != c) || (b == c && c != A) || (A == c && b != A)){
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}