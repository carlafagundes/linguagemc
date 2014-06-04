#include <stdio.h>

//Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.

int main(){
	float temperatura;
	printf("Digite a temperatura em Fahrenheit\n");
	scanf("%f", &temperatura);
	printf("Temperatura: %f O valor sera %f: ",temperatura, (5 * (temperatura-32) / 9));
	return (0);
}
