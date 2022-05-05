/*
*	Questão 05
*
*	Desenvolva um algoritmo que receba os valores x e y de um ponto em um
* sistema de coordenadas cartesiano e determinar em qual quadrante o ponto
* de coordenada se encontra.
*/

#include <stdio.h>

void main()
{
	// Variáveis para salvar as coordenadas
	int x, y;
	
	// Entrada de dados pelo usuário
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	
	if(x >= 0 && y >= 0) // Primeiro Quadrante: x positivo e y positivo
	{
		printf("Primeiro Quadrante\n");
	}
	else if(x < 0 && y >= 0) // Segundo Quadrante: x negativo e y positivo
	{
		printf("Segundo Quadrante\n");
	}
	else if(x < 0 && y < 0) // Terceiro Quadrante: x negativo e y negativo
	{
		printf("Terceiro Quadrante\n");
	}
	else // Quarto Quadrante: x positivo e y negativo
	{
		printf("Quarto Quadrante\n");
	}
}
