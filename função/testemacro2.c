#include <stdio.h>
#include <stdlib.h>

#define somar(x,y) (x+y);
#define mult(x,y) (x) * (y);

int main(){
    int num = 5, num2 = 11;

    int total = somar(num, num2);

    printf("%d", total);


    int totalmult = mult(total, num2);

    printf("\n%d", totalmult);

    



    


    return 0;
}