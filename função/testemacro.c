#include <stdio.h>
#include <stdlib.h>

#define ERRO printf("\nValor invalido\n");

int main(){
    int num;

    while ((num < 1)|| (num > 10)){
        printf("Digite um numero de 1 a 10: ");
        scanf("%d", &num);

        if ((num < 1) || (num > 10)){
            ERRO
        }
        
    }
    
    printf ("O valor digitado foi: %d", num);
    
    





    return 0;
}
