#include <stdio.h>

int main()
{
	int i, j;
	int iteracoes;
	
	printf("Digite a quantidade de iteracoes: ");
	scanf("%d", &iteracoes);
	
	for(i = 0; i < iteracoes; i++)
	{
		for(j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
 	return 0;
}