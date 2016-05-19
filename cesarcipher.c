#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i, cont = 0;
    scanf("%d", &i);
    while(cont < i){
        char letra[55];
        int chave, j = 0;
        scanf(" %s", letra);
        scanf("%d", &chave);
        int cripto;
        while(j < strlen(letra)){
            if(letra[j] - chave < 65){
                int dif;
                dif = 65 - (letra[j] - chave);
                cripto = 91 - dif;
                    }
                else{
                   cripto = letra[j] - chave;
                }
            printf("%c", cripto);
            j++;
        }
        printf("\n");
        cont++; 
    }



    return 0;
}