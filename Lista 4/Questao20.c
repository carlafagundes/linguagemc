#include<stdio.h>

void recebe()
{
	char s[50];
	gets(s);
	puts(s);
	return;
}

int main()
{
	recebe();
	system("pause");
	return 0;	
}
