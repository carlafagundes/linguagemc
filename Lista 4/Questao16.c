#include<stdio.h>
#include<ctype.h>

#define tam 30

char *tiraletra(char *s1, char *letra)
{
	int i=0,j,cont;
	
	while(i<strlen(s1))						
	{
		cont =0;
		if(tolower(s1[i]) == tolower(*letra))	//compara deixando as 2 letras em minuscula e exclui;
		{
			for(j=i;j<strlen(s1);j++)
				s1[j] = s1[j+1];
			s1[j] = '\0';
			cont=1;
		}
	
		if(tolower(s1[i]) == tolower(*letra))
			continue;
		else
			i++;		
	}
	
	
	return s1;
}

char *recebe()
{
	char letra;
	char *s1;								//cria ponteiro tipo char;
	
	s1 = (char *)malloc(sizeof(char)*tam);		//aloca 30(tam) espa�os do tipo char no ponteiro s1.
	gets(s1);
	scanf("%c", &letra);
	
	
	return tiraletra(s1, &letra);				
}

int main()
{
	puts(recebe());
	system("pause");
	return 0;	
}
