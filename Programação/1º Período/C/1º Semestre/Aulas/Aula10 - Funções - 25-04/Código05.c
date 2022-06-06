#include <stdio.h>

float Soma(float a, float b);
float Subtracao(float a, float b);
float Multiplicacao(float a, float b);
float Divisao(float a, float b);

int main()
{
	char operacao;
	float x, y, z;
	
	printf("Escolha uma das operacoes basicas da matematica:\n");
	printf("Operacao: ");
	scanf("%c", &operacao);
	
	printf("Valor de x: ");
	scanf("%f", &x);
	
	printf("Valor de y: ");
	scanf("%f", &y);
	
	switch(operacao)
	{
		case '+':
			z = Soma(x, y);
			break;
			
		case '-':
			z = Subtracao(x, y);
			break;
			
		case '*':
			z = Multiplicacao(x, y);
			break;
			
		case '/':
			z = Divisao(x, y);
			break;
	}
	
	printf("Resultado: %.2f", z);
	
 	return 0;
}


float Soma(float a, float b)
{
	return a+b;
}

float Subtracao(float a, float b)
{
	return a-b;
}

float Multiplicacao(float a, float b)
{
	return a*b;
}

float Divisao(float a, float b)
{
	if(b != 0)
	{
		return a/b;
	}
	else
	{
		return -1;
	}
}