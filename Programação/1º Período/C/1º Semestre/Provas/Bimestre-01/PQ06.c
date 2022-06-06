#include <stdio.h>

int main()
{
	int escolha;
	float numero, soma, produto;
	
	do
	{
		printf("####### MENU #######\n");
		printf("1- Somar\n");
		printf("2- Multiplicar\n");
		printf("3- Sair\n");
		printf("Escolha: ");
		scanf("%d", &escolha);
		
		// SOMAR
		if(escolha == 1)
		{
			soma = 0;
			
			do
			{
				printf("Digite um numero: ");
				scanf("%f", &numero);
				soma += numero;
				printf("Soma: %.2f\n\n", soma);
			}
			while((int) numero*10000 != 0);
		}
		
		// Produto
		if(escolha == 2)
		{
			produto = 1;
			
			do
			{
				printf("Digite um numero: ");
				scanf("%f", &numero);
				produto *= numero;
				printf("Soma: %.2f\n\n", produto);
			}
			while((int) numero*10000 != 0);
		}
	}
	while(escolha != 3);
	
 	return 0;
}
