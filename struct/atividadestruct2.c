#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livro{
    char titulo[50];
    char autor[50];
    int ano;

}livro;

int main(){

    livro livros[2];

    for (int i = 0; i < 2; i++){
         
         printf("Informe o titulo do livro: \n");
         scanf("%s", &livros[i].titulo);

         printf("Informe o autor do livro: \n");
         scanf("%s", &livros[i].autor);

         printf("Informe o ano do lancamento do livro: \n");
         scanf("%d", &livros[i].ano);

    }

    printf("\nLivros registrados: \n");
    printf("===========================\n");

    for (int i = 0; i < 2; i++){
        printf("Titulo: %s\n", livros[i].titulo);
            printf("\n");
        printf("Autor: %s\n", livros[i].autor);
            printf("\n");
        printf("lancado em: %d\n", livros[i].ano);
            printf("\n");

    }
    


    




    return 0;
}