#include <stdio.h>

//Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

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
