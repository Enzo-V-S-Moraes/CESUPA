#include <stdio.h>

/*
* Terceira Questão
*
* Entrar com o lado de um quadrado e imprimir o perímetro, área e diagonal.
*/


void main()
{
	// Para calcular a área, perímetro e diagonal, precisamos saber o lado do quadrado
	// então devemos declarar essa variável e pedir para o usuário inserir seu valor
	float lado;
	
	// Variáveis para guardar o resultado dos calculos
	float area;
	float perimetro;
	float diagonal;
	
	// Vamos fazer a interação com usuário
	printf("Digite o valor do lado do quadrado: ");
	scanf("%f", &lado); // %f por que a variável lado é do tipo float
	
	// Vamos fazer o processamento agora
	area = lado * lado;   // a formula para calcular a área é A = l*l
	perimetro = 4*lado;   // a formula para calcular o perimetro é P = l+l+l+l
	diagonal = lado*1.41; // a formula para calcular a diagonal é D = l*√2
	
	// Agora só falta escrever o resultado para o usuário
	printf("O valor da area eh %.3f \n", area); // O .3f que dizer para escrever o número até 3 casas decimais
	printf("O valor do perimetro eh %.3f \n", perimetro);
	printf("O valor da diagonal eh %.3f", diagonal);
}
