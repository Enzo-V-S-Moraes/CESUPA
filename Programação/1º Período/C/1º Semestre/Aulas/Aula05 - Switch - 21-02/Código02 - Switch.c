#include <stdio.h>
#include <stdlib.h>

void main()
{
	char estadoCivil;
	
	printf("Digite seu estado civil\n");
	printf("S- solteiro \t C- Casado \t D- divorciado \t V- viuvo: ");
	scanf("%c", &estadoCivil);
	
	switch(estadoCivil)
	{
		case 'c':
		case 'C':
			printf("Casado");
			break;
			
		case 's':
		case 'S':
			printf("Solteiro");
			break;
			
		case 'd':
		case 'D':
			printf("Divorciado");
			break;
			
		case 'v':
		case 'V':
			printf("Viuvo");
			break;
			
		default:
			printf("Valor invalido");
	}
}#include <stdio.h>
#include <stdlib.h>

void main()
{
	char estadoCivil;
	
	printf("Digite seu estado civil\n");
	printf("S- solteiro \t C- Casado \t D- divorciado \t V- viuvo: ");
	scanf("%c", &estadoCivil);
	
	switch(estadoCivil)
	{
		case 'c':
		case 'C':
			printf("Casado");
			break;
			
		case 's':
		case 'S':
			printf("Solteiro");
			break;
			
		case 'd':
		case 'D':
			printf("Divorciado");
			break;
			
		case 'v':
		case 'V':
			printf("Viuvo");
			break;
			
		default:
			printf("Valor invalido");
	}
}