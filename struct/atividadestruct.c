#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    char nome[20];
    float nota;

}aluno;

int main(){

    aluno alunos[3];

    for (int i = 0; i < 3; i++){
        printf("Dados do aluno %d\n", i +1);

        printf("Nome: ");
        scanf("%s", &alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

    }

    printf("\nDados dos alunos\n");

   for (int i = 0; i < 3; i++)
   {
     printf("Aluno %d\n", i+1);

    printf("Nome: %s\n", alunos[i].nome);  

    printf("Nota: %.2f\n", alunos[i].nota); 
   }
    
    



    
    return 0;
}

