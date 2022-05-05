#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int A[5][5], B[5][5];
	int C[5][5] = {0};
	int i, j, k;
	
	srand(time(NULL));
	
	// Gerando valores aleatórios e inserindo na matriz A e B
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			A[i][j] = rand()%10;
			B[i][j] = rand()%10;
		}
	}
	
	// Calculando a mutiplicação matricial de A e B
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			for(k = 0; k < 5; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	
	// Imprimir a matriz A
	printf("Matriz A:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	
	// Imprimir a matriz B
	printf("\nMatriz B:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}
	
	// Imprimir a matriz C
	printf("\nMatriz C:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	
 	return 0;
}