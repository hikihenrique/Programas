#include <stdio.h>

int main(){
	int a, i = 0;
	scanf("%d", &a);
	while (i < a){
		double b, c, d;
		scanf("%lf%lf%lf", &b, &c, &d);
		double med = ((b * 2) + (c * 3) + (d * 5)) / 10;
		printf("%.1lf\n", med);
		i ++;
	}

	return 0;
}