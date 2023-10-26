#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *escrevendo = fopen("testando.txt", "w");
    fprintf(escrevendo, "10");
    fclose(escrevendo);
    
    FILE *saida = fopen("testando.txt", "r");

    if (saida == NULL){
        printf("Arquivo nao encontardo");
        return 0;
    }

    int x;
    fscanf(saida , "%d", &x);
    printf("%d", x);

    fclose(saida);
    

    






    return 0;
}