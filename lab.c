#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int a, i = 1;
	int r = 0, c = 0, s = 0;
	scanf("%d", &a);
	while(i <= a){
		char tipo[2];
		int quant;
		scanf("%d%s", &quant, tipo);
		if(strcmp(tipo, "C") == 0){
			c += quant;
		}
		if(strcmp(tipo, "R") == 0){
			r += quant;
		}
		if(strcmp(tipo, "S") == 0){
			s += quant;
		}
		i ++;
	}
	int total = r + c + s;
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", total, c, r, s, (c * 100.0 / total), (r * 100.0 / total), (s * 100.0 / total));



	return 0;
}