#include <stdio.h>
#include <stdlib.h>

// Programa que imprime os N primeiros números ímpares dados.

int main(){

    int numero;
    int impar;
    int i;

    numero = 0;
    impar = 0;
    i = 1;

    printf("Digite um numero \n");
    scanf("%d", &numero);

    while ( i > 0 ){
        if( i % 2 != 0 ){
            printf("%d \n", i);
            impar++;
        }
        if( impar == numero ){
            break;
        }
        i++;
    }

    return 0;
}

