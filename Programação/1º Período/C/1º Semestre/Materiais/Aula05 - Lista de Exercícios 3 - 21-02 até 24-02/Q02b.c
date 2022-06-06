/*
*	Questão 02
*
*	Faça a troca dos valores de duas variáveis inteiras, ou seja, o valor de a é
* igual ao valor de b e o valor de b é igual ao valor de a (caso queira um desafio
* maior, tenta resolver sem utilizar variáveis auxiliares).
*	Aqui vamos utilizar a equação para fazer a troca
*/

#include <stdio.h>

void main()
{
	// As varáveis 'a' e 'b' vão armazenar os dados de entrada do usuário
	int a, b;
	
	// Entrada de dados
	printf("Digite o valor de a: ");
	scanf("%d", &a);	
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	
	// Fazendo a troca utilizando matemática
	a = a+b;
	b = a-b;
	a = a-b;
	
	// Escrever o resultado
	printf("Novo valor de a: %d\n", a);
	printf("Novo valor de b: %d", b);
}
