/*
*	Questão 04
*
*	Entrar com valores para xnum1 e xnum2 e imprimir o valor de x
*/

#include <stdio.h>
#include <math.h>

int main()
{
	// Variáveis de entrada
	float xnum1, xnum2;
	// Variável de saida
	float x;
	
	// Interação com o usuário para digitar os valores de entrada
	printf("Digite o valor de xnum1: ");
	scanf("%f", &xnum1);
	printf("Digite o valor de xnum2: ");
	scanf("%f", &xnum2);
	
	// Calculo da fórmula
	// Tomar cuidado com as prioridades dos operadores
	// Podemos utilizar os parênteses para criar nossas próprias prioridades
	x = xnum1 + xnum2/(xnum1+xnum2) + 2*(xnum1-xnum2) + log2(64);
	
	// Imprimir resultado
	printf("Valor de x: %.2f", x);
	
 	return 0;
}
