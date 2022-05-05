/*
*	Questão 02
*
*	Efetuar a leitura de três valores (A, B e C) e efetuar o cálculo da equação de
* segundo grau Ax² + Bx + C, apresentando as duas raízes, se para os valores
* informados for possível efetuar o referido cálculo.
*/

#include <stdio.h>
#include <math.h>


int main()
{
	// Variáveis de entrada
	float A, B, C;
	// Variáveis de saida/processamento
	float delta, raiz1, raiz2;
	
	// Interação com o usuário para digitar os valores de entrada
	printf("Dada a seguinte equacao do segundo graus\n");
	printf("Ax^2 + Bx + C\n");
	printf("Digite o valor para A: ");
	scanf("%f", &A);
	printf("Digite o valor para B: ");
	scanf("%f", &B);
	printf("Digite o valor para C: ");
	scanf("%f", &C);
	
	
	// Uma equação quadrada pode ter 3 comportamentos
	// Se delta for positivo, teremos 2 raizes reais
	// Se delta for igual a 0, teremos 1 raiz real
	// Se delta for negativo, as raizes serão complexas e não real, logo não há como calcular
	delta = pow(B, 2) - 4*A*C;
	
	if(delta > 0) // Duas raizes reais
	{
		raiz1 = (-B+sqrt(delta))/(2*A);
		raiz2 = (-B-sqrt(delta))/(2*A);
		
		printf("Primeira raiz: %.2f\n", raiz1);
		printf("Segunda raiz: %.2f\n", raiz2);
	}
	else if(delta == 0) // Unica raiz real
	{
		raiz1 = (-B+sqrt(delta))/(2*A);
		
		printf("Unica raiz: %.2f\n", raiz1);
	}
	else // Raizes complexas
	{
		printf("Valor complexo, nao possui raiz real\n");
	}
	
	
 	return 0;
}
