#include <stdio.h>
#include <time.h>

int main()
{
	int vetor[100];
	int i, numero;
	
	srand(time(NULL));
	
	for(i = 0; i < 100; i++)
	{
		vetor[i] = rand() % 100;
		printf("Index: %d \t Elemento: %d\n", i, vetor[i]);
	}
	
	printf("Digite um numero para buscar dentro do vetor: ");
	scanf("%d", &numero);
	
	for(i = 0; i < 100; i++)
	{
		if(numero == vetor[i])
		{
			printf("Valor na posicao %d\n", i);
			break;
		}
	}
	
	if(i == 100)
	{
		printf("Numero nao encontrado\n");
	}
	
 	return 0;
}