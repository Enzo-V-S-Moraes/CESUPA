#include <stdio.h>
#include <string.h>

int main()
{
	char nome1[50];
	char nome2[50];
	char nomeResultado[5] = "";
	
	printf("Digite um nome com 4 letras: ");
	gets(nome1);
	printf("Digite outro nome com 4 letras: ");
	gets(nome2);
	
	if(strlen(nome1) != 4 || strlen(nome2) != 4)
	{
		printf("Tamanho do nome errado!\n");
	}
	else
	{
		strncat(nomeResultado, nome1, 2);
		strncat(nomeResultado, nome2, 2);
	
		printf("Novo nome: %s", nomeResultado);	
	}
	
 	return 0;
}