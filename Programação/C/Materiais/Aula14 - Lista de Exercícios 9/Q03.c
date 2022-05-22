#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[10][100];
	char endereco[10][100];
	char telefone[10][100];
	
	char nomeBusca[100];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("##### Cadastrando pessoa n: %d #####\n", i+1);
		printf("Digite o nome: ");
		gets(nome[i]);
		printf("Digite o Endereco: ");
		gets(endereco[i]);
		printf("Digite o telefone: ");
		gets(telefone[i]);
	}
	system("CLS||CLEAR");
	fflush(stdin);
	
	printf("Digite o nome da pessoa que deseja buscar: ");
	gets(nomeBusca);
	
	for(i = 0; i < 10; i++)
	{
		if(strcmp(strupr(nomeBusca), strupr(nome[i])) == 0) //strupr transforma a string para letras maiusculas
		{
			printf("Nome: %s \n", nome[i]);
			printf("Endereco: %s \n", endereco[i]);
			printf("Telefone: %s \n", telefone[i]);
			break;
		}
	}
	
	if(i >= 10)
	{
		printf("Nome nao encontrado!");
	}
	
 	return 0;
}