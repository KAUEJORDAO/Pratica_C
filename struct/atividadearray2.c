#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

   int vetor[6] = {0};
   int total = 0;
   float media ;

    for (int i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);

        

    }

    for (int i = 0; i < 6; i++)
    {
        total+=vetor[i];
    }
    
    
    media =(float)total/6;

    printf("Media = %f", media);

    return 0;
}