/*
*	Questão 02
*
*	Entrar com um número e imprimir uma das mensagens: é múltiplo de 3 ou
* não é múltiplo de 3.
*/

#include <stdio.h>

void main()
{
	// Declaração das variáveis
	int valor1;
	
	// Interação com usuário e leitura de dados
	printf("Digite um numero: ");
	scanf("%d", &valor1);
	
	// Para ser multiplo de 3, o resto da divisão (%) deve ser igual a 0
	if(valor1%3 == 0)
	{
		printf("Eh multiplo de 3\n");
	}
	else
	{
		printf("Nao eh multiplo de 3\n");
	}
}
