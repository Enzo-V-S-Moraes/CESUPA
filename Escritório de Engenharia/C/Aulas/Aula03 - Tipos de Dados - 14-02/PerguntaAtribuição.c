#include <stdio.h>

void main()
{
	int a = 1; // alocando o valor 1 para a
	int b = 2; // alocando o valor 2 para b
	int c = 3; // alocando o valor 3 para c
	int d = 4; // alocando o valor 4 para d
	
	a = b = c = d = 7; // qual será o novo valor para a, b, c, d ???????
	
	printf("Valor de a: %d \n", a);
	printf("Valor de b: %d \n", b);
	printf("Valor de c: %d \n", c);
	printf("Valor de d: %d \n", d);
}