#include <stdio.h>
#include <stdlib.h>

void main()
{
	float salario;
	char estadoCivil;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	fflush(stdin);
	
	printf("Digite seu estado civil\n");
	printf("S- solteiro \t C- Casado: ");
	scanf("%c", &estadoCivil);
	
	if(estadoCivil == 'S' || estadoCivil == 's')
	{
		printf("Imposto a pagar eh %.2f", salario*0.1);	
	}
	else
	{
		if(estadoCivil == 'C' || estadoCivil == 'c')
		{
			printf("Imposto a pagar eh %.2f", salario*0.09);	
		}
		else
		{
			printf("Valor invalido");
		}
	}
}
