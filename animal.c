#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	char a[50], b[50], c[50];
	scanf("%s %s %s", a ,b ,c);
	if (strcmp(a, "vertebrado") == 0){
		if (strcmp(b, "mamifero") == 0){
			if (strcmp(c, "onivoro") == 0){
				printf("homem\n");
			}else{
				printf("vaca\n");
			}
		}else{
			if (strcmp(c, "carnivoro") == 0){
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}
		}
	}else{
		if (strcmp(b, "anelideo") == 0){
			if (strcmp(c, "onivoro") == 0){
				printf("minhoca\n");
			}else{
				printf("sanguessuga\n");
			}
		}else{
			if (strcmp(c, "hematofago") == 0){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}
		}
	}

	return 0;
}