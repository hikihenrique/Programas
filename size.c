#include <stdio.h>
#include <stdlib.h>


int main(){
	int i = 0;
	int j = 0;
	while (i < 6){
		double a;
		scanf("%lf", &a);
		if (a > 0){
			j ++;
		}
		i ++;
	}
	printf("%d valores positivos\n", j);
	return 0;
}