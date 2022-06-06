#include <stdio.h>

int main()
{
	int vet[20] = {0};
	int i, aux;
	
	for(i = 0; i < 20; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
	}
	printf("\n\n");
	
	for(i = 0; i <= 9; i++)
	{
		aux = vet[i];
		vet[i] = vet[19-i];
		vet[19-i] = aux;
	}

	for(i = 0; i < 20; i++)
	{
		printf("%d ", vet[i]);
	}

 	return 0;
}