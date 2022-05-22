#include <stdio.h>
#include <string.h>

int main()
{
	char palavra[100];
	int tamanho, i, limite;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	tamanho = strlen(palavra);
	
	if(tamanho%2 == 0)
	{
		limite = (tamanho/2) - 1;
	}
	else
	{
		limite = ((tamanho - 1)/2) - 1;
	}
	
	for(i = 0; i <= limite; i++)
	{
		if(palavra[i] != palavra[tamanho-i-1])
		{
			printf("Nao eh palidromo\n");
			break;
		}
	}
	
	if(i == limite+1)
	{
		printf("Palindromo\n");
	}
	
 	return 0;
}