/*
*	Questão 01
*
*	Construir um algoritmo que leia dois valores numéricos e efetue a adição;
* caso o resultado seja maior que 10, apresentá-lo.
*/

#include <stdio.h>

void main()
{
	// Declaração das variáveis
	int valor1, valor2; // Declaração de variáveis do mesmo tipo podem ser na mesma linha
	
	// Interação com usuário e leitura de dados
	printf("Digite um numero: ");
	scanf("%d", &valor1);
	
	printf("Digite outro numero: ");
	scanf("%d", &valor2);
	
	// A condição é verificar se a soma é maior que 10 e monstrar esse resultado
	if(valor1 + valor2 > 10) // A soma poderia ser salva em uma variável
	{
		printf("Soma maior que 10\n");
		printf("O resultado eh %d", valor1 + valor2);
	}
	else
	{
		printf("Soma menor que 10\n");
	}
}
