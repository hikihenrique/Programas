#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i, a = 0, sum = 0;
	char num[1000];
	scanf("%d", &i);
	while(a < i){
		int j = 0;
		scanf("%s", num);
		while(j < strlen(num)){
				if(num[j] == '0'){
					sum += 6;
				}
				if(num[j] == '1'){
					sum += 2;
				}
				if(num[j] == '2'){
					sum += 5;
				}
				if(num[j] == '3'){
					sum += 5;
				}
				if(num[j] == '4'){
					sum += 4;
				}
				if(num[j] == '5'){
					sum += 5;
				}
				if(num[j] == '6'){
					sum += 6;
				}
				if(num[j] == '7'){
					sum += 3;
				}
				if(num[j] == '8'){
					sum += 7;
				}
				if(num[j] == '9'){
					sum += 6;
				}
			j++;
		}
		printf("%d leds\n", sum);
		a++;
		sum = 0;
	}

	

	return 0;
}