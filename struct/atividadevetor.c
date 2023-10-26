#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vetor[5] = {0};
    int soma = 0;
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        soma +=vetor[i];
    }

    printf("soma = %d", soma);
    
    



    return 0;
}
