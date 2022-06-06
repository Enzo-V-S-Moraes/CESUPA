/*
*	Questão 01
*
*	Uma pessoa resolveu fazer uma aplicação em uma poupança programada.
* Para calcular seu rendimento, ela deverá fornecer o valor constante da
* aplicação mensal, a taxa e o número de meses.
*/

#include <stdio.h>
#include <math.h>


int main()
{
	float taxa, aplicacaoMensal, meses; // variáveis de entrada
	float rendimento; // variável de saida
	
	// Interação com o usuário para receber os valores de entrada
	printf("Digite o valor da taxa: ");
	scanf("%f", &taxa);
	printf("Digite o valor da aplicacao mensal: ");
	scanf("%f", &aplicacaoMensal);
	printf("Digite a quantidade de meses: ");
	scanf("%f", &meses);
	
	// Calculo da fórmula
	// Tomar cuidado com as prioridades dos operadores
	// Podemos utilizar os parênteses para criar nossas próprias prioridades
	rendimento = aplicacaoMensal*((pow(taxa+1, meses)-1)/taxa);
	
	// Imprimir resultado
	printf("Rendimento: %.2f\n", rendimento);
	
 	return 0; // terminar código
}
