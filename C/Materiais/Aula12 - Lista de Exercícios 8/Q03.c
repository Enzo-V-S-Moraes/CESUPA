#include <stdio.h>
#include <time.h>

int main()
{
	int matriz[5][5];
	int i, j;
	
	srand(time(NULL));
	
	// Gerando valores aleatórios e salvando na matriz
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			matriz[i][j] = rand()%100;
		}
	}
	
	// Imprimir os valores da matriz
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	// Imprimir os valores da diagonal principal
	printf("\nDiagonal principal\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t", matriz[i][i]);
	}
	
 	return 0;
}