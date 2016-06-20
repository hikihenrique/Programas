#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main(int argc, char const *argv[]){
 	
 	char ent[1005], test[1005];
 	int a, j = 0, cont = 1, bate = 0;
 	scanf("%d", &a);
 	while(j < a){
 		scanf("%s", ent);
 		scanf("%s", test);
 		while(cont <= strlen(test)){
 			if(ent[strlen(ent) - cont] == test[strlen(test) - cont]){
 				bate = 1;
 			}
 			else{
 				bate = 0;
 				printf("nao encaixa\n");
 			}
 			cont++;
 		}

 		j++;
 	}

 	return 0;
 }