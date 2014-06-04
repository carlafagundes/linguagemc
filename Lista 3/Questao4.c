#include <stdio.h>
#include <stdlib.h>

// Programa que exibe os cinco primeiros múltiplos de 3.

int main(){

    int multiplo, i;

    multiplo = 0;
    i = 1;

    while( i > 0 ){
        if(i % 3 == 0){
            printf("%d \n", i);
            multiplo++;
        }
        if( multiplo == 5 ){
            break;
        }
        i++;
    }

    return 0;
}
