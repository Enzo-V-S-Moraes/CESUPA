#include <stdio.h>

int main()
{
	int numero = 1;
	int qtd21 = 0;
	int qtd50 = 0;
	
	while(numero > 0)
	{
		printf("Digite a idade da pessoa: ");
		scanf("%d", &numero);
		
		if(numero < 21 && numero > 0)
		{
			qtd21 ++;
		}
		else if(numero > 50)
		{
			qtd50 ++;
		}		
	}
	
	printf("Quantidade de Pessoas <21: %d\n", qtd21);
	printf("Quantidade de Pessoas >50: %d", qtd50);
	
 	return 0;
}