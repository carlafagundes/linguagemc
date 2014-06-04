#include <stdio.h>
#include <stdlib.h>

// Programa que imprime o maior e o menor número de uma sequencia dada.

int main(){

    int numero, menor, maior;

    printf("Digite um numero inteiro (Digite um numero negativo para encerrar)\n");
    scanf("%d", &numero);

    while(numero > 0){


        if(numero > menor){
            maior = numero;
        } else
            if(numero < maior){
                menor = numero;
            }

        printf("Digite um numero inteiro (Digite um numero negativo para encerrar)\n");
        scanf("%d", &numero);
    }
    printf("O maior numero digitado foi: %d \n", maior);
    printf("O menor numero digitado foi: %d \n\n", menor);
    printf("Fim do programa. \n\n");

    return 0;
}


