#include <stdio.h>
#include <stdlib.h>

int main(){

float media = 0, total = 0, notas[5] = {0};


    printf("Insira 5 notas para calcular a media:\n");

    for(int i = 0; i < 5; i++){
        scanf("%f", &notas[i]);

    }

    for (int i = 0; i < 5; i++){
        total += notas[i]; 

    }

    media = total /5;

    printf("Media = %.2f", media);
    return 0;
}
