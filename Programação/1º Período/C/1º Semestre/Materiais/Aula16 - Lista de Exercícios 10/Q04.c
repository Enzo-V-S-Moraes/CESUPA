#include <stdio.h>

int EhRaizExata(int numero);

int main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(EhRaizExata(numero))
	{
		printf("Possui raiz exata!\n");
	}
	else
	{
		printf("Nao possui raiz exata!\n");
	}
	
 	return 0;
}


int EhRaizExata(int numero)
{
	int i;
	for(i = 0; i*i <= numero; i++)
	{
		if(i*i == numero)
		{
			return 1; // O return faz a gente retornar um valor e sair da função
		}
	}
	
	// O meu código só vai chegar aqui se eu conseguir terminar o laço de repetição
	return 0;
}