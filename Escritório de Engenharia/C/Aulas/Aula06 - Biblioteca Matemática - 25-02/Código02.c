#include <stdio.h>
#include <math.h>

void main()
{
	float a, b, c;
	float resultado;
	
	printf("Digite um valor para 'a': ");
	scanf("%f", &a);
	
	printf("Digite um valor para 'b': ");
	scanf("%f", &b);
	
	printf("Digite um valor para 'c': ");
	scanf("%f", &c);
	
	resultado = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
	
	printf("Diagonal = %f", resultado);
}