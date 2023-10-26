#include <stdlib.h>
#include <stdio.h>

int teste (){
    static int estatica = 2;
    estatica *=2;

    printf("%d\n", estatica);


    
}

int main(){
   
    teste();
    teste();
    teste();                                   

    
    

    return 0;
}
