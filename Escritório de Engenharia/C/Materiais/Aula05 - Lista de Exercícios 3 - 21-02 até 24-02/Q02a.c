/*
*	Questão 02
*
*	Faça a troca dos valores de duas variáveis inteiras, ou seja, o valor de a é
* igual ao valor de b e o valor de b é igual ao valor de a (caso queira um desafio
* maior, tenta resolver sem utilizar variáveis auxiliares).
*/

#include <stdio.h>

void main()
{
	// As varáveis 'a' e 'b' vão armazenar os dados de entrada do usuário
	// A variável aux é uma variável auxiliar para ajudar na troca.
	int a, b, aux;
	
	// Entrada de dados
	printf("Digite o valor de a: ");
	scanf("%d", &a);	
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	
	// Lógica para trocas os dados
	aux = a; // 'aux' está guardando o valor original de 'a'
	a = b; // 'a' agora possui o valor de 'b'
	b = aux; // 'b' agora está pegando o valor original de 'a' que está em 'aux'
	
	// Escrever os valores na tela
	printf("Novo valor de a: %d\n", a);
	printf("Novo valor de b: %d", b);
}
