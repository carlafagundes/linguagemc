#include <stdio.h>

//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte f�rmula: (72.7*altura) - 58

int main(){
	float altura;
	printf("Digite sua altura\n");
	scanf("%f",&altura);
	printf("Seu peso ideal e: %f",(72.7*altura) - 58);
	return 0;
}
