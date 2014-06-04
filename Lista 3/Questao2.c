#include <stdio.h>
#include <stdlib.h>

// Programa que lê o numero de habitantes , o consumo do mês e o código do consumidor. Imprime o consumo maior, menor e a media.

void dados(){

    int NumeroHabitantes,codigo, i=0;
    float energ1=0,energ2=0,energ3=0, aux_energ, maior_energ=0, menor_energ=9999999;

	printf("Digite o numero de habitantes: ");
	scanf("%d", &NumeroHabitantes);

	while(i<NumeroHabitantes)
	{
		i++;

		system("cls");
		printf("|  :: Tabela ::  |\n");
		printf("|1 - Residencial |\n");
		printf("|2 - Comercial   |\n");
		printf("|3 - Industrial  |\n");
		printf("Informe o codigo e consumo mensal: ");
		scanf("%d %f",&codigo, &aux_energ );

		if(codigo>0 && codigo<4)
		{

			if(aux_energ < menor_energ)
				menor_energ = aux_energ;
			if(aux_energ > maior_energ)
				maior_energ = aux_energ;

			switch(codigo)
			{
				case 1: 	energ1 = energ1 + aux_energ;
				case 2:	energ2 = energ2 + aux_energ;
				case 3:	energ3 = energ3 + aux_energ;
			}
		}
		else
		{
			printf("\n\nCodigo nao confere!");
			_sleep(2500);
			i--;
		}
	}
	aux_energ = (energ1 + energ2 + energ3)/NumeroHabitantes; //média de consumo.

	system("cls");
	printf(" :: Relatorio Geral ::\n");
	printf("Menor consumo: %.2f kwh.\n",menor_energ);
	printf("Maior consumo: %.2f kwh.\n",maior_energ);
	printf("Consumo medio: %.2f kwh.\n",aux_energ);
	printf("\n :: Relatorio por tipo de consumidor ::\n");
	printf("1 - Residencial: %.2f kwh.\n",energ1);
	printf("2 - Comercial:   %.2f kwh.\n",energ2);
	printf("3 - Industrial:  %.2f kwh.\n\n",energ3);



	return;
}

int main()
{
	dados();
	system("pause");
	return 0;

}
