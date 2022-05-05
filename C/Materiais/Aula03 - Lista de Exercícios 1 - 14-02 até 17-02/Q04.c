#include <stdio.h>

/*
* Quarta Questão
*
* 	Ler dois números reais e imprimir o quadrado da diferença do primeiro valor
* pelo segundo e a diferença dos quadrados.
*/

void main()
{
	// Precisamos de duas variáveis para salvar o valor digitado pelo usuário
	float numero1;
	float numero2;
	
	// Variáveis para guardar o resultado dos calculos
	float quadradoDiferenca;
	float diferencaQuadrado;
	
	// Vamos fazer a interação com usuário
	printf("Digite um numero: ");
	scanf("%f", &numero1); // %f por que a variável raio é do tipo float
	printf("Digite outro numero: ");
	scanf("%f", &numero2);
	
	// Vamos fazer o processamento agora
	// a formula para calcular o quadrado da diferença é qD = (a-b)²
	quadradoDiferenca = (numero1 - numero2) * (numero1 - numero2);
	
	// a formula para calcular a diferença do quadrado é dQ = a² - b²
	diferencaQuadrado = numero1 * numero1 - numero2 * numero2;
	
	// Agora só falta escrever o resultado para o usuário
	printf("O valor do quadrado da diferenca eh %.3f \n", quadradoDiferenca);
	printf("O valor da diferenca do quadrado eh %.3f", diferencaQuadrado);
}