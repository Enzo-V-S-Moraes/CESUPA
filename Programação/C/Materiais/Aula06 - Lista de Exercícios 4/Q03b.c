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
	int razao, a1, termo;
	// Variável de saida
	int an;
	
	// Interação com o usuário para digitar os valores de entrada
	printf("Digite o primeiro termo da PG: ");
	scanf("%d", &a1);
	printf("Digite a razao: ");
	scanf("%d", &razao);
	printf("Digite o termo que deseja calcular: ");
	scanf("%d", &termo);
	
	// Calculo do nº termo da progressão geométrica
	an = a1*pow(razao, termo-1);
	
	printf("%d Elemento da PG: %d", termo, an);
	
 	return 0;
}
