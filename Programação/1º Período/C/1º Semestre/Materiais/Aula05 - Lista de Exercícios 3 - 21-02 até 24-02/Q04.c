/*
*	Questão 04
*
*	Leia 3 valores e escreva-os em ordem crescente. Caso haja dois ou mais
* valores iguais escreva uma mensagem informando isso.
*/

#include <stdio.h>

void main()
{
	// Variáveis de entrada
	int a, b, c;
	
	// Entrada de dados do usuário
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para C: ");
	scanf("%d", &c);
	
	// Aqui começa a lógica para organizar em ordem crescente
	if(a > b && a > c) // verificando se 'a' é maior que 'b' e 'c'
	{
		printf("Maior: %d\n", a);
		
		if(b > c) // Se 'b' é maior que 'c', logo 'b' é o valor do meio
		{
			printf("Meio: %d\n", b);
			printf("Menor: %d\n", c);
		}
		else // Se 'c' é maior que 'b', logo 'c' é o valor do meio
		{
			printf("Meio: %d\n", c);
			printf("Menor: %d\n", b);
		}
	}
	else if(b > a && b > c) // verificando se 'b' é maior que 'a' e 'c'
	{
		printf("Maior: %d\n", b);
		
		if(a > c) // Se 'a' é maior que 'c', logo 'a' é o valor do meio
		{
			printf("Meio: %d\n", a);
			printf("Menor: %d\n", c);
		}
		else // Se 'c' é maior que 'a', logo 'c' é o valor do meio
		{
			printf("Meio: %d\n", c);
			printf("Menor: %d\n", a);
		}
	}
	else if(c > a && c > b) // verificando se 'c' é maior que 'a' e 'b'
	{
		printf("Maior: %d\n", c);
		
		if(a > b) // Se 'a' é maior que 'b', logo 'a' é o valor do meio
		{
			printf("Meio: %d\n", a);
			printf("Menor: %d\n", b);
		}
		else // Se 'b' é maior que 'a', logo 'b' é o valor do meio
		{
			printf("Meio: %d\n", b);
			printf("Menor: %d\n", a);
		}
	}

	// Verificando se existe no mínimo dois valores iguais
	if(a == b || a == c || b == c)
	{
		printf("Possui no minimo dois valores iguais\n");
	}

}
