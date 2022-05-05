/*
*	Questão 06
*
*	Desenvolva um algoritmo onde o usuário deva interagir com um menu
* contendo 6 produtos, ao escolher um produto o usuário deve informar
* quantos serão comprados. No final o algoritmo deve mostrar o valor total da
* compra.
*/

#include <stdio.h>

void main()
{
	// Variáveis para salvar o valor inserido pelo usuário
	int escolha, quantidade;
	// Variável para salvar o valor do calculo
	float custo;
	
	// Interação com o usuário
	printf("######### Bem - Vindo #########\n");
	printf("Escolha um dos itens abaixo\n");
	printf("1- Caneta \t R$ 2,00\n");
	printf("2- Lapis \t R$ 1,50\n");
	printf("3- Borracha \t R$ 1,43\n");
	printf("4- Caderno \t R$ 5,32\n");
	printf("5- Regua \t R$ 10,34\n");
	printf("6- Canetinha \t R$ 7,23\n");
	printf("Escolha: ");
	scanf("%d", &escolha);
	
	printf("Digite a quantidade: ");
	scanf("%d", &quantidade);
	
	// A partir da escolha do usuário do produto, calcular o custo
	switch(escolha)
	{
		case 1:
			custo = quantidade * 2.00; // Caneta custa 2,00
			break;
		case 2:
			custo = quantidade * 1.5; // Lapis custa 1,50
			break;
		case 3:
			custo = quantidade * 1.43; // Borracha custa 1,43
			break;
		case 4:
			custo = quantidade * 5.32; // Caderno custa 5,23
			break;
		case 5:
			custo = quantidade * 10.34; // Regua custa 10,34
			break;
		case 6:
			custo = quantidade * 7.23; // Canetinha custa 7,23
			break;
		default: // Caso o usuário digitou algum valor que seja do menu inicial
			printf("Valor invalido!\n");
			custo = -1;
	}
	
	// Imprimir o custo total
	printf("Valor total a pagar: R$ %.2f", custo);
}
