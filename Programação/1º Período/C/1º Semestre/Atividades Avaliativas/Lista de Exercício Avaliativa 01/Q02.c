#include <stdio.h>

int main()
{
	float pesoCaixaOz, pesoCaixaTo, qtdCaixa;
	
	printf("Digite o peso da caixa de cereal (Oz): ");
	scanf("%f", &pesoCaixaOz);
	
	pesoCaixaTo = pesoCaixaOz/35273.92;
	qtdCaixa = 1/pesoCaixaTo;
	
	printf("Peso da caixa em Toneladas: %f\n", pesoCaixaTo);
	printf("Quantidade de caixas para 1 Tonelada: %f", qtdCaixa);
	
 	return 0;
}