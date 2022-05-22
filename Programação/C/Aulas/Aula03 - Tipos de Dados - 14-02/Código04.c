#include <stdio.h>

void main()
{
	int numero1;
	int numero2;
	int resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero1);
	printf("Digite um numero: ");
	scanf("%d", &numero2);
	
	resultado = numero1 * numero2;
	
	printf("O resultao eh %d", resultado);
}