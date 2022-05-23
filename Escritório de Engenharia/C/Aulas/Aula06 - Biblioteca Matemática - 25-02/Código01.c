#include <stdio.h>
#include <math.h>

void main()
{
	float numero;
	float resultado;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	resultado = log10(numero);
	
	printf("Resultado: %.3f", resultado);
}