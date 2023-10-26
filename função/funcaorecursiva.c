#include <stdlib.h>
#include <stdio.h>

int fatorial (int x){
    int resultado = x * x-1;
    if (x == 0 ){
        resultado = 1;
    }else{
        resultado = x * fatorial (x-1);

    }

    return resultado;
}



int main(){
    int numero, resultado;

    scanf("%d", &numero);

    resultado = fatorial(numero);
    printf("%i! = %i", numero, resultado);
    
    return 0;
}
