/*
* Questão 02
* Desenvolva um código onde o usuário deve inserir dois números e depois o
* código deve retornar o produto desses números (O calculo deve ser
* efetuado sem utilizar o operador de multiplicação *)
*/

#include <stdio.h>

int main()
{
	// Declaração das variáveis
	int numeroA, numeroB;
	int resultado = 0;
	
	// Interação com o usuário para receber o valor para numeroA e numeroB
	printf("Calcular a multiplicacao\n");
	printf("Expressao:\n A*B = C\n");
	printf("Digite um valor para A: ");
	scanf("%d", &numeroA);
	printf("Digite um valor para B: ");
	scanf("%d", &numeroB);
	
	// Processamento
	// A multiplicação não é nada mais do que a soma do mesmo número
	// Então para 3*4 é a mesma coisa que 3+3+3+3
	// O primeiro numéro é o valor que iremos somas e o segundo e quantas vezes
	// vamos somar.
	for(int i = 0; i < numeroB; i++)
	{
		resultado += numeroA;
	}
	
	// Escrever o resultado da soma
	printf("%d", resultado);
	
 	return 0;
}