#include <stdio.h>
#include <stdlib.h>

void main()
{
	char estadoCivil;
	
	printf("Digite seu estado civil\n");
	printf("S- solteiro \t C- Casado \t D- divorciado \t V- viuvo: ");
	scanf("%c", &estadoCivil);
	
	if(estadoCivil == 'S' || estadoCivil == 's')
	{
		printf("Estado: solteiro");	
	}
	else
	{
		if(estadoCivil == 'C' || estadoCivil == 'c')
		{
			printf("Estado: casado");	
		}
		else
		{
			if(estadoCivil == 'D' || estadoCivil == 'd')
			{
				printf("Estado: divorciado");
			}
			else
			{
				if(estadoCivil == 'V' || estadoCivil == 'v')
				{
					printf("Estado: viuvo");
				}
				else
				{
					printf("Valor invalido");
				}
			}
		}
	}
}

