#include <stdio.h>

//Fa�a um Programa que leia o tamanho de um lado do quadrado e calcule sua �rea, em seguida mostre o dobro desta �rea para o usu�rio

int main(){
	int lado;
	scanf("%d",&lado);
	printf("A area do quadrado de lado %d e %d\n", lado, lado*lado);
	printf("O dobro da area do quadrado e %d", lado*lado*2);
	return(0);
}
