#include <stdio.h>

/*
Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. 
Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o 
Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�:
sal�rio bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o sal�rio l�quido.
calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
+ Sal�rio Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Sal�rio Liquido : R$
Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.
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
