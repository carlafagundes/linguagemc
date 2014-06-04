#include <stdio.h>

//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

int main(){
	float media, nota1, nota2, nota3, nota4;
	printf("Digite a primeira nota\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota\n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota\n");
	scanf("%f", &nota3);
	printf("Digite a quarta nota\n");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	printf("Media: %f", media);
	return 0;
}
