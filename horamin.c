#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int hf, hi, mf, mi, hora, min;
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	if (hf >= hi){
		if (mi == mf){
			hora = (24 + hf) - hi;
			min = 0;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
		}
		if (mf > mi){
			hora = hf - hi;
			min = mf - mi;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
		}
		if (mf < mi){
			min = (60 + mf) - mi;
			hora = min / 60;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
		}
	}
	if (hf < hi){
		if (mi == mf){
			hora = (24 + hf) - hi;
			min = 0;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
		}
		if (mf > mi){
			hora = (24 + hf) - hi;
			min = mf - mi;
			hora += min / 60;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
		}
		if (mf < mi){
			min = (60 + mf) - mi;
			if (min > 0){
				hora = ((24 + hf) - hi) - (1 + min / 60);
			}
			else{
				hora = (24 + hf) - hi;
			}
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
		}
	}

	return 0;
}