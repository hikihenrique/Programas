#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int charcmp(int k, int j){
	if(k == j){
		printf("%c %c\n", k, j);
		return 0;
		
	}
	else{
		printf("%c %c\n", k, j);
		return 1;
		
	}
}

int main(int argc, char const *argv[]){
 	
 	char ent[1005], test[1005];
 	int a, j = 1, cont, bate;
 	scanf("%d", &a);
 	while(j <= a){
 		bate = 0;
 		cont = 1;
 		scanf("%s %s", ent, test);
 		while(cont <= strlen(test)){
 			if(strlen(ent) - cont < 0 || strlen(test) - cont < 0){
 				goto s1;
 			}
 			if(charcmp(ent[strlen(ent) - cont],test[strlen(test) - cont]) == 0){
 				bate += 0;
 			}
 			else{
 				bate += 1;
 				
 			}
 			cont++;
 		}
 	 	s1: if(bate != 0){
 			printf("nao encaixa\n");
 			
 		}
 		else{
 			printf("encaixa\n");
 		}
		j++;
 	}

 	return 0;
 }