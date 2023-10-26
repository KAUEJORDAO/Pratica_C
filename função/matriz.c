#include <stdlib.h>
#include <stdio.h>

int main(){

    int numeroDeAlunos = 4; 
    int bimestreAnuais = 4;

    float notasAlunos [numeroDeAlunos] [ bimestreAnuais];
    float mediaAlunos[numeroDeAlunos] ;
    float media = 0;
    

    printf("Insira as 4 notas do aluno 1: \n");

    for (int aluno = 0; aluno < numeroDeAlunos; aluno++){
        for (int notas  = 0; notas < bimestreAnuais; notas++){
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
            
        }

        mediaAlunos[aluno] = media / bimestreAnuais;
        media =0;
        printf("insiara as notas do aluno %i:\n", aluno +2);
        
    }
        for (int aluno = 0; aluno < numeroDeAlunos; aluno++)
        {
            printf("a media do aluno %i eh %.2f:\n", aluno + 1, mediaAlunos[aluno]);
        }
        

    




    
    return 0;
}
