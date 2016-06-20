#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]){
	
	char msg[55];
	int j;
	while(scanf("%[^\n]%*c", msg) != EOF){
		
		j = 0;
		if(strlen(msg) == 0){
			return 0;
		}
		while(j < strlen(msg)){
			if(msg[j] >= 65 && msg[j] <= 90){
				if(msg[j] + 13 > 90){
					printf("%c", ((msg[j] + 13) - 90) + 64);
				}
				else{
					printf("%c", msg[j] + 13);
				}
				goto s1;

			}
			if(msg[j] >= 97 && msg[j] <= 122){
				if(msg[j] + 13 > 122){
					printf("%c", ((msg[j] + 13) - 122) + 96);
				}
				else{
					printf("%c", msg[j] + 13);
				}
				goto s1;
			}
			
			
			printf("%c", msg[j]);

			
			s1: j++;
			
		}

		printf("\n");
	};


	return 0;
}