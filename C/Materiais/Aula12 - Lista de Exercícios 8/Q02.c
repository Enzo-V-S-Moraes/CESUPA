#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int i, j, aux;
	int A[25], B[25], V[50];
	srand(time(NULL));
	
	for(i = 0; i < 25; i++)
	{
		A[i] = rand()%100;
		B[i] = rand()%100;
	}
	
	for(i = 0; i < 25; i++)
	{
		V[2*i] = A[i];
		V[2*i + 1] = B[i];
	}
	
	printf("Vetor A\n");
	for(i = 0; i < 25; i++)
	{
		printf("%d \t", A[i]);
	}
	
	printf("\n\nVetor B\n");
	for(i = 0; i < 25; i++)
	{
		printf("%d \t", B[i]);
	}
	
	printf("\n\nVetor V\n");
	for(i = 0; i < 50; i++)
	{
		printf("%d \t", V[i]);
	}
	
	for(i = 0; i < 50; i++)
	{
		for(j = i+1; j < 50; j++)
		{
			if(V[i] > V[j])
			{
				aux = V[i];
				V[i] = V[j];
				V[j] = aux;
			}
		}
	}
	
	
	printf("\n\nNovo Vetor V\n");
	for(i = 0; i < 50; i++)
	{
		printf("%d \t", V[i]);
	}
	
 	return 0;
}