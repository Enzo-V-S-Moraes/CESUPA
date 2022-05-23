#include <stdio.h>

void main()
{
	float salario;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if(salario <= 0)
	{
		printf("Informacao invalida!\n");
	}
	else
	{
		if(salario >= 1000)
		{
			printf("Imposto a pagar eh %f", salario*0.1);
		}
		else
		{
			printf("Imposto a pagar eh %f", salario*0.05);
		}
	}
}