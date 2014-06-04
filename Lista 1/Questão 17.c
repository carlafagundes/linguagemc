#include <stdio.h>

/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7 (h = altura)
Peça o peso da pessoa e informe se ela está dentro, acima ou abaixo do peso.

*/
int main(){
	int sexo;
	float altura;
	
	printf("Digite sua altura\n");
	scanf("%f", &altura);
	
	printf("Digite seu sexo (1 para mulher e 0 para homem)\n");
	scanf("%d", &sexo);
	
	if (sexo == 1){
		printf("%f\n",(62.1*altura) - 44.7);
	}
	if (sexo == 0){
		printf("%f\n",(72.7*altura) - 58);
	}
	return 0;
}
