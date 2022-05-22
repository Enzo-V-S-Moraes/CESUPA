#include <stdio.h>
#include <string.h>
int main()
{
	char nome[50];
	
	printf("Digite um nome: ");
	gets(nome);
	
	if(strncmp(nome, "A", 1) >= 0 && strncmp(nome, "K", 1) <= 0)
	{
		printf("Sala: 101\n");
	}
	else if(strncmp(nome, "L", 1) >= 0 && strncmp(nome, "N", 1) <= 0)
	{
		printf("Sala: 102\n");
	}
	else
	{
		printf("Sala: 103\n");
	}
	

 	return 0;
}