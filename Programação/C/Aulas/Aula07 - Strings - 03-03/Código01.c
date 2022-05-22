#include <stdio.h>

int main()
{
	char nome[50];
	//char nome1[] = "ALgum texto";
	
	printf("Digite seu nome completo: ");
	//puts("Digite seu nome completo: ");
	
	//scanf("%s", nome);
	gets(nome);
	
	printf("Seu nome eh: %s", nome);
	
 	return 0;
}