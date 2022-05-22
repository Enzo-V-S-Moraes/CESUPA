#include <stdio.h>

void main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero != 0)
	{
		printf("Numero nao eh zero");
	}
	else
	{
		printf("Numero eh zero");
	}
}