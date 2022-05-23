/*
*	Questão 03
*
*	A prefeitura de Belém abriu uma linha de crédito para funcionários
* estatuários. O valor máximo da prestação não poderá ultrapassar 30% do
* salário bruto. Fazer um algoritmo que permita entrar com o salário bruto e o
* valor da prestação e informar se o empréstimo pode ou não ser concedido.
*/

#include <stdio.h>

void main()
{
	// Declaração das variáveis
	float salarioBruto, prestacao; // Declaração de variáveis do mesmo tipo podem ser na mesma linha
	
	// Interação com usuário e leitura de dados
	printf("Digite seu salario bruto: ");
	scanf("%f", &salarioBruto);
	printf("Digite sua prestacao: ");
	scanf("%f", &prestacao);
	
	// Para calcular 30% de um valor basta multiplicar o valor por 0.3
	if(prestacao <= salarioBruto*0.3)
	{
		printf("O emprestimo foi concedido");
	}
	else
	{
		printf("O emprestimo nao foi concedido");
	}
}
