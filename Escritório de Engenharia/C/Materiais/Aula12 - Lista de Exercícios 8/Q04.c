#include <stdio.h>

int main()
{
	int matriz[5][5];
	int i, j;
	
	// Loaços for para inserir valores na matriz
	for(i = 0; i <= 4; i++) //Linhas
	{
		for(j = 0; j <= 4; j++) //colunas
		{
			printf("I: %d \t J:%d\n", i, j);
			printf("Digite um valor: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n\n");
	
	// Imprimir os valores da matriz
	for(i = 0; i <= 4; i++) // linha
	{
		for(j = 0; j <= 4; j++) // coluna
		{
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	// Imprimir os elementos acima da diagonal principal
	for(i = 0; i <= 4; i++)
	{
		for(j = 0; j <= 4; j ++)
		{
			if(j > i)
			{
				printf("%d \t", matriz[i][j]);
			}
			else
			{
				printf("- \t");
			}
		}
		printf("\n");
	}
	
 	return 0;
}