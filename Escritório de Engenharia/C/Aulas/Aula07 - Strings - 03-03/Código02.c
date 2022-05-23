#include <stdio.h>

int main()
{
	char cidade[50];
	char estado[50];
	
	printf("Digite sua cidade: ");
	gets(cidade);
	printf("Digite seu estado: ");
	gets(estado);
	
	printf("Sua cidade eh: %s\n", cidade);
	printf("Seu estado eh: %s\n", estado);
	
 	return 0;
}