#include <stdlib.h>
#include <stdio.h>

int fatorial (int x){
    if (x == 0){
        return 1;
    }
    else{
        return x * fatorial(x-1);
    }

}

int main(){
    int n = 5, resultado;

    resultado = fatorial(n);

    printf("%d", resultado);
    

}