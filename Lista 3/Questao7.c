#include <stdio.h>
#include <stdlib.h>

// Programa que verifica se um número fornecido é primo ou não.

int main(){

    int NumeroPrimo = 0;
    int NumeroDivisores = 0;
    int i = 1;

    printf("Digite o numero\n");
    scanf("%d", &NumeroPrimo);

    if( NumeroPrimo == 2 ){
        printf("O numero digitado eh primo\n");
        return 0;
    }

    while( i <= NumeroPrimo ){
        if( NumeroPrimo % i == 0 ){
            NumeroDivisores++;
        }
        i++;
    }

        if( NumeroDivisores == 2 ){
            printf("O numero digitado eh primo\n");

        } else printf("O numero digitado nao eh primo\n");

    return 0;
}



