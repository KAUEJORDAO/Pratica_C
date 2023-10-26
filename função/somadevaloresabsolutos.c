#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b){

    float valorAbsoluto(float x);
    if(a < 0 ){
        a = valorAbsoluto(a);
    }
    if (b<0) {
        b = valorAbsoluto(b);
    }

    return a + b;
}

float valorAbsoluto(float x){

    return x * -1;

}


int main(){
    float num1, num2, somar;
    
    printf("\nEscreva dois numeros: \n\n");
    printf("Primeiro numero: ");
    scanf("%f", &num1);

    printf("Segundo numero: ");
    scanf("%f", &num2);

    somar = soma(num1, num2);

    printf("A soma dos dois numeors absolutos eh: %.2f", somar);

    

    
    
    return 0;
}
