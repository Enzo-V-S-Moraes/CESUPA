#include <stdio.h>

/*
* Quinta Questão
*
* 	Criar um código que, dado um número de conta corrente com três dígitos,
* retorne o seu dígito verificador, o qual é calculado de acordo com o exemplo:
* 	Número da conta: 235
* 	a. Somar o número da conta com o seu inverso: 235 + 532 = 767
* 	b. Multiplicar cada dígito pela sua ordem posicional e somar estes
* resultados: 7x1 + 6x2 + 7x3 = 40
* 	c. O último dígito desse resultado é o dígito verificador da conta: 0.
*/

void main()
{
	int numeroConta;
	int centena, dezena, unidade;
	int numeroInverso, soma, somaDigitos, digitoVerificador;
	
	printf("Digite o numero da conta: ");
	scanf("%d", &numeroConta);
	
	centena = numeroConta/100;
	dezena = (numeroConta/10)%10;
	unidade = numeroConta%10;
	
	numeroInverso = unidade*100 + dezena*10 + centena;
	
	soma = numeroConta + numeroInverso;
	
	centena = soma/100;
	dezena = (soma/10)%10;
	unidade = soma%10;
	
	somaDigitos = centena + dezena*2 + unidade*3;
	
	digitoVerificador = somaDigitos%10;
	
	printf("Valor do digito verificador eh %d", digitoVerificador);
	
}
