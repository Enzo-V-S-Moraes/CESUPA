#include <stdio.h>

/*
* Segunda Questão
*
* 	Entrar com um número inteiro de três casas
* e imprimir o algarismo da casa das dezenas.
*/

void main()
{
	// Precisamos de uma variável para salvar o valor digitado pelo usuário
	int numero; // a questão especificou um número inteiro de 3 casas
	
	// Variáveis para guardar o resultado dos calculos
	int dezena;
	
	// Vamos fazer a interação com usuário
	printf("Digite um numero de 3 casas: ");
	scanf("%d", &numero);
	
	// Vamos fazer o processamento agora
	// A melhor maneira de resolver esse problema seria utilizar as operações / e %
	dezena = numero / 10; // Dividir por 10 me retornar o casa das centenas e dezenas
	dezena = dezena % 10; // Como o número agora possui duas casas, o resto da divisão me retorna o primeiro numero
	
	// Agora só falta escrever o resultado para o usuário
	printf("O numero da casa das dezenas eh %d", dezena);

}
