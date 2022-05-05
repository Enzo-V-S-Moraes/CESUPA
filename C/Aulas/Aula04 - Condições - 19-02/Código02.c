#include <stdio.h>

void main()
{
	int x;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	if(x >= 0)
	{
		printf("Numero positivo\n");
	}
	else
	{
		printf("Numero negativo\n");
	}
}