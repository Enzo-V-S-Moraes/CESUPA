#include <stdio.h>

int main()
{
	int altura, comprimento;
	int i, j;
	
	
	printf("Digite altura: ");
	scanf("%d", &altura);
	printf("Digite comprimento: ");
	scanf("%d", &comprimento);
	
	//1� Linha
	for(i = 0; i < comprimento; i++)
	{
		printf("#");
	}
	printf("\n");
	
	// Regiao do meio
	for(i = 0; i < altura - 2; i++)
	{
		printf("#");
		// Escrever espa�os
		for(j = 0; j < comprimento - 2; j++)
		{
			printf(" ");
		}
		printf("#\n");
	}
	
	//Ultima linha;
	for(i = 0; i < comprimento; i++)
	{
		printf("#");
	}
	printf("\n");
 	return 0;
}
