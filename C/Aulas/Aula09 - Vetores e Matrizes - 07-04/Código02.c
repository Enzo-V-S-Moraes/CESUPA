#include <stdio.h>

int main()
{
	int A[10] = {0};
	int i, soma = 0;

	// Loop para fazer input no vetor
	for(i = 0; i < 10; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &A[i]);
	}
	
	// Loop para varrer o vetor e verificar os elementos pares
	for(i = 0; i < 10; i++)
	{
		if(A[i]%2 == 0)
		{
			soma += A[i];
		}
	}

	printf("Soma dos pares: %d", soma);

 	return 0;
}