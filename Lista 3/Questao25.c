#include<stdio.h>

#define tam 9
void calc(int *pA, int *pB)
{
	int C[tam],i;
	
	for(i=0;i<tam+1;i++)
		C[i] = pA[i] - pB[i];
	printf("\nVetor C: ");
	for(i=0;i<tam+1;i++)
		printf("| %d ",C[i]);
		printf("|\n\n");
	return;

}

void preenchevetor(int *pvet)
{
	int i;
	for(i=0;i<tam+1;i++)
	{
		scanf("%d", &pvet[i]);		
	}

	return;
}


int main()
{
	int A[tam],B[tam];
	
	printf("informe o vetor 1\n");
	preenchevetor(A);
	printf("\ninforme o vetor 2\n");
	preenchevetor(B);
	calc(A,B);

	
	system("pause");
	return 0;

}
