/*
*	Questão 03
*
*	Entrar com um número e informar se ele é divisível por 3 e por 7, caso ele
* seja divisível por ambos os números, verificar se também é divisível por 2.
* Caso o número não seja divisível por 3 e por 7, verificar se é divisível por 4.
*/

#include <stdio.h>

void main()
{
	// Variável para salvar o valor digitado pelo usuário
	int numero;
	
	// Entrada de dado
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	// Para saber se um número é divisível por algum valor, o resto da divisão deve ser igual a 0
	// Aqui estou verificando se o numéro é divisível por 3 e 7 ao mesmo tempo
	if(numero%3 == 0 && numero%7 == 0)
	{
		// Agora que eu sei que o número é divisível por 3 e 7, vou verificar se é divisível por 2
		if(numero%2 == 0)
		{
			printf("Multiplo de 3, 7 e 2\n");
		}
		else // não é divisível por 2
		{
			printf("Multiplo de 3 e 7\n");
		}
	}
	else // Não é divisível por 3 e por 7
	{
		if(numero % 4 == 0) // Verificar se é divisível por 4
		{
			printf("Multiplo de 4\n");
		}
	}
}
