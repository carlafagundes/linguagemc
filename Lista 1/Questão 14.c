#include<stdio.h>

//Fa�a um Programa que pe�a a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

int main(){
	float celsius;
	printf("Digite a temperatura\n");
	scanf("%f", &celsius);
	printf("Temperatura: %f O valor sera %f: ", celsius, (celsius*1.8 + 32.0));
}
