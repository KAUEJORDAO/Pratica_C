#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa {
    int idade;
    char nome[20];
}pessoa;


int main(){

pessoa pessoa1, pessoa2;

    strcpy(pessoa1.nome, "jose");
    pessoa1.idade = 22;

    printf("Registro #1: \n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);

    strcpy(pessoa2.nome, "antonela");
    pessoa2.idade = 97;

    printf("Registro #2: \n");
    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d", pessoa2.idade);

    return 0;
}
