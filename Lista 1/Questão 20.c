#include <stdio.h>

/*
Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um 
link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).
*/

int main(){
	float Mb, Mbps;
	
	printf("Digite o tamanho arquivo\n");
	scanf ("%f", &Mb);
	
	printf("Digite a velocidade da internet\n");
	scanf ("%f", &Mbps);
	
	printf("O tempo de download e: %fmin", Mb/Mbps/60.0);	
	return 0;
}
