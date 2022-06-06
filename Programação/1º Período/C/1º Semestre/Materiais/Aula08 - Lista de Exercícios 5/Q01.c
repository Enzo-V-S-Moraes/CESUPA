/*
* Questão 01
*
* Elaborar um algoritmo de um programa que efetue o cálculo da fatorial de
* número entre 1 e 10 escolhido pelo usuário
*/

#include <stdio.h>

int main()
{
	
	int fatorial = 1;
	int numero;
	int i;
	
	// Interação com usuário para receber o valor de entrada
	printf("Calculo do fatorial\n");
	printf("Digite o numero que deseja calcular: ");
	scanf("%d", &numero);
	
	// Laço de repetição para efetuar o processamento
	for(i = 2; i <= numero; i++)
	{
		// A cada iteração acrescentamos em fatorial o valor de i na multiplicação
		// i = 2; fatorial = 1 * 2
		// i = 3; fatorial = 1*2 * 3
		// i = 4; fatorial = 1*2*3 * 4 ...
		fatorial *= i;
	}
	
	// Imprimir o resultado
	printf("Resultado: %d", fatorial);
	
 	return 0;
}