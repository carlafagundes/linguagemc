#include <stdio.h>
#include <stdlib.h>

// Programa que calcula a soma dos 50 primeiros números pares.

int main(){

    int i = 1;
    int soma = 0;
    int par = 0;

    while( i > 0 ){
        if( i % 2 == 0 ){
            soma = soma + i;
            par++;
        }
        if( par == 50 ){
            break;
        }
        i++;
    }

    printf(" A soma dos primeiros 50 numeros pares: %d \n", soma);

    return 0;
}




