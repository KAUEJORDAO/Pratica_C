#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int matriz[3][3];

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matriz[linha][coluna]);

            
        }
        

        
    }
    
    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            printf("%d", matriz[linha][coluna]);
            
            
        }
        

        printf("\n");
    }
    

    return 0;
}
