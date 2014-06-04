#include <stdio.h>

//Ler o valor do raio de um circulo e calcular a área do circulo correspondente, considere  = 3:141592.

int main(){
	float raio;
	float area;
	scanf("%f",&raio);
	area = 3.141592*raio*raio;	
	printf("A area do circulo de raio %f e %f", raio, area);
	return(0);
}


