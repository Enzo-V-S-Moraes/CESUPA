#include <stdio.h>

/*
* Primeira Questão
*
* 	Desenvolva um programa que efetue o cálculo da área e o perímetro de uma circunferência,
* apresentando os resultados.
*/

void main()
{
	// Para calcular a área e o perímetro, precisamos saber do raio da circunferência
	// então devemos declarar essa variável e pedir para o usuário inserir seu valor
	float raio;
	
	// Variáveis para guardar o resultado dos calculos
	float area;
	float perimetro;
	
	// Vamos fazer a interação com usuário
	printf("Digite o valor do raio da circunferencia: ");
	scanf("%f", &raio); // %f por que a variável raio é do tipo float
	
	// Vamos fazer o processamento agora
	area = 3.14 * raio * raio; // a formula para calcular a área é A = π*r²
	perimetro = 2*3.14*raio;   // a formula para calcular o perimetro é P = 2*π*r
	
	// Agora só falta escrever o resultado para o usuário
	printf("O valor da area eh %.3f \n", area); // O .3f que dizer para escrever o número até 3 casas decimais
	printf("O valor do perimetro eh %.3f", perimetro); // O .3f que dizer para escrever o número até 3 casas decimais
}