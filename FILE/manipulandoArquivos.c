#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *entrada = fopen("teste.txt", "w");
    fprintf(entrada, "155");
    fclose(entrada);

    FILE *saida = fopen("teste.txt", "r");

    if(saida == NULL){
        printf("Arquivo nao encontrado\n");
        return 0;
    }

    int x;

    fscanf(saida,"%d", &x);

    printf("%d", x);
    fclose(saida);




    return 0;
}