#include <stdio.h>

//Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área, em seguida mostre o dobro desta área para o usuário

int main(){
	int lado;
	scanf("%d",&lado);
	printf("A area do quadrado de lado %d e %d\n", lado, lado*lado);
	printf("O dobro da area do quadrado e %d", lado*lado*2);
	return(0);
}
