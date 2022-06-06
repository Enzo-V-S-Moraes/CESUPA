#include <stdio.h>

Fatorial(int numero);

int main()
{
	
	printf("%d", Fatorial(4));
	Fatorial(3);
	Fatorial(5);
	
 	return 0;
}


int Fatorial(int numero)
{
	int fatorial = 1;
	int i;
	
	for(i = 2; i <= numero; i++)
		fatorial *= i;
		
	return fatorial;
}