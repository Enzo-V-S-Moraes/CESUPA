#include <stdio.h>

void NumeroPrimo(int numero);

int main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	NumeroPrimo(numero);
	
 	return 0;
}


void NumeroPrimo(int numero)
{
	int i;
	for(i = 2; i < numero; i++)
	{
		if(numero % i == 0)
		{
			printf("Numero nao eh primo!\n");
			break;
		}
	}
	
	if(i == numero || numero == 1)
	{
		printf("Numero eh primo!\n");
	}
}