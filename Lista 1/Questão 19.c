#include <stdio.h>

/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o 
Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.
*/
int main(){
	float SalarioHora, HorasTrabalhadas;
	
	printf("Digite o valor da sua hora\n");
	scanf("%f", &SalarioHora);
	
	printf("Digite as horas trabalhadas\n");
	scanf("%f", &HorasTrabalhadas);
	
	printf("\nO seu salario Bruto eh: R$%f", SalarioHora*HorasTrabalhadas);
	printf("\nVoce pagou R$ %f de Imposto de Renda", SalarioHora*HorasTrabalhadas*0.11);
	printf("\nVoce pagou R$ %f para o sindicato", SalarioHora*HorasTrabalhadas*0.05);
	printf("\nVoce pagou R$ %f de INSS", SalarioHora*HorasTrabalhadas*0.08);
	printf("\nSeu salario Liquido e: R$ %f", SalarioHora*HorasTrabalhadas - (SalarioHora*HorasTrabalhadas*0.11 + SalarioHora*HorasTrabalhadas*0.08 + SalarioHora*HorasTrabalhadas*0.05));
	return 0;
}
