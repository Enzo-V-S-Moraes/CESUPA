/*
* Questão 03
*
* Apresentar todos os valores numéricos inteiros pares situados na faixa de
* 100 a 200. Depois dos valores serem impressos, mostre a soma desses
* valores.
*/

#include <stdio.h>

int main()
{
	// Definição das variáveis
	int i;
	int soma = 0;

	// Laço onde o i está indo do valor 100 até o 200
	for(i = 100; i <= 200; i++)
	{
		printf("%d\n", i);
		
		// Caso i seja par, somar o valor de i para a variável soma
		if(i%2 == 0)
		{
			soma += i;
		}
	}

	// Escrever o resultado da soma
	printf("\nSoma: %d", soma);

 	return 0;
}