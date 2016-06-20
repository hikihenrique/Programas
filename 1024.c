#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
	
	int a, i = 0;
	scanf("%d", &a);
	while(a > i){
		char *msg = (char *) malloc(10 * sizeof(char));
		scanf("%s", msg);
		int cripto;
		int k = 0, j = 0;
		while(k < strlen(msg)){
			if(msg[k] <= 122 || msg[k] >= 97){
				cripto[k] = msg[k] + 3;
			}
			if(msg[k] <= 90 || msg[k] >= 65){
				cripto[k] = msg[k] + 3;
			}

		}
		i++;
	}


	return 0;
}