#include <stdio.h>

//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

int main(){
	int horas;
	float salario;
	printf("Digite o seu salario\n");
	scanf("%f", &salario);
	printf("Digite o numero de horas trabalhadas no mes\n");
	scanf("%d", &horas);
	printf("Voce ganha R$%f por mes", salario*horas);
	return (0);
}
