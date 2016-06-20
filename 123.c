#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]){
	int i, j = 0;
	char teste[6];
	scanf("%d", &i);
	while(j < i){
		scanf("%s", teste);
		if(strlen(teste) >= 5){
			printf("3\n");
		}
		else if((teste[0]=='t' && teste[1]=='w')||(teste[0]=='t'&&teste[2]=='o')||(teste[1]=='w'&&teste[2]=='o')){
			printf("2\n");
		}
		else{
			printf("1\n");
		}
		
			
		
		j++;
			
	}

	return 0;
}