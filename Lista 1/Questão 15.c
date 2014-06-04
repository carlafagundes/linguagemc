#include <stdio.h>
#include <math.h>

/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
o produto do dobro do primeiro com metade do segundo .
a soma do triplo do primeiro com o terceiro.
o terceiro elevado ao cubo.*/

int main(){
	int a,b;
	float c;
	printf("Digite um numero inteiro\n");
	scanf("%d", &a);
	
	printf("Digite outro numero inteiro\n");
	scanf("%d", &b);
	
	printf("Digite um numero real\n");
	scanf("%f", &c);
	
	printf("Produto do dobro do primeiro com metade do segundo %f\n", 2.0*a + b/2.0);
	printf("A soma do triplo do primeiro com o terceiro %f\n", 3.0*a + c);
	printf("O terceiro elevado ao cubo %f\n",pow((c),3));
}
