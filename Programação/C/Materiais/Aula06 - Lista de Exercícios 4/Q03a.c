/*
*	Questão 03
*
*	Entrar com a razão de uma Progressão Geométrica e o valor do 1º termo.
* Calcular e imprimir o 5º termo da série (Para um desafio maior, calcule o
* termo que o usuário desejar em vez do 5º).
*/

#include <stdio.h>
#include <math.h>

int main()
{
	// Variáveis de entrada
	int razao, a1;
	// Variável de saida
	int a5;
	
	// Interação com o usuário para digitar os valores de entrada
	printf("Digite o primeiro termo da PG: ");
	scanf("%d", &a1);
	printf("Digite a razao: ");
	scanf("%d", &razao);
	
	// Calculo do 5º termo da progressão geométrica
	a5 = a1*pow(razao, 4);
	
	printf("Quinto Elemento da PG: %d", a5);
	
 	return 0;
}
