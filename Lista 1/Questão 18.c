#include <stdio.h>

/*
Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo 
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um programa que leia a 
vari�vel peso (peso de peixes) e verifique se h� excesso. Se houver, gravar na vari�vel excesso e na vari�vel multa 
o valor da multa que Jo�o dever� pagar. Caso contr�rio mostrar tais vari�veis com o conte�do ZERO.
*/

int main(){
	float peso, excesso, multa;
	
	printf("Digite o peso\n");
	scanf("%f", &peso);
	if (peso > 50.0){
		excesso = peso - 50.0;
		multa = excesso * 4.0;
	}
	printf("O peso foi %f\nO exesso foi %f\nA multa foi de R$ %f", peso, excesso, multa);
}
