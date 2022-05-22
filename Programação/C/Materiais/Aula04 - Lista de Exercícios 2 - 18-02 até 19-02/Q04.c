/*
*	Questão 04
*
*	Ler três números e imprimir se eles podem ou não ser lados de um triângulo
* e classificar o triângulo segundo os lados.
*/

#include <stdio.h>

void main()
{
	// Declaração das variáveis
	int a, b, c;
	
	// Interação com usuário e leitura de dados
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite um numero: ");
	scanf("%d", &b);
	printf("Digite um numero: ");
	scanf("%d", &c);
	
	// Para que os três segmentos formem um triângulo, existe o que conhecemos como condição de existência
	// que é a seguinte: a soma de dois lados é sempre menor que o terceiro lado.
	if(a < b + c && b < a + c && c < a + b)
	{
		if(a == b && b == c) // Triangulo equilatero
		{
			printf("Triangulo equilatero");
		}
		// caso a condição do equilatero seja falsa, verificamos a condicao do isósceles
		else if(a == b || a == c || b == c)
		{
			printf("Triangulo isosceles");
		}
		// aqui, por exclusão, sempre será escaleno
		else
		{
			printf("Triangulo escaleno");
		}
	}
	else
	{
		printf("Triangulo nao existe!");
	}
}
