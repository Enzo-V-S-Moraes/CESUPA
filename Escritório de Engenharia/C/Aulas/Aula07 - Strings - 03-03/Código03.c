#include <stdio.h>
#include <string.h>


int main()
{
	char nome[50];
	int tamanho;
	
	printf("Digite seu nome: ");
	gets(nome);
	tamanho = strlen(nome);
	printf("Tamanho do nome eh: %d", tamanho);
	printf("\n\n");
	
	////////////////***********************//////////////////
	
	printf("Valor original: %s\n", nome);
	strcpy(nome, "Outro texto qualquer");
	printf("Valor alterado: %s\n\n", nome);
	
	char texto[] = "Um segundo texto";
	
	printf("Valor original: %s\n", nome);
	strcpy(nome, texto);
	printf("Valor alterado: %s\n\n", nome);
	
	////////////////***********************//////////////////
	
	int resultado;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	resultado = strcmp("Carlos", nome);
	
	printf("%d", resultado);
	
 	return 0;
}