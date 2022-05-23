/*
* Questão 04
*
* Apresentar todos os números positivos divisíveis por 5 que sejam menores
* que 15.
*/

#include <stdio.h>

int main()
{
	// Declaração das variáveis
	int i;
	int n;
	
	// Laço de repetição para i variar de 0 até 14
	for(i = 0; i < 15; i++)
	{
		// Se o resto da divião por 5 for igual a 0, que dizer que i é
		// multiplo de 5
		if(i % 5 == 0)
		{
			printf("%d\n", i);
		}
	}
	
 	return 0;
}