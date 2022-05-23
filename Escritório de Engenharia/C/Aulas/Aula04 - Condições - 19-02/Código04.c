#include <stdio.h>

void main()
{
	float salario;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if(salario <= 100000)
	{
		salario = salario + 1000;	
	}
	
	printf("Seu salario eh %f", salario);
}