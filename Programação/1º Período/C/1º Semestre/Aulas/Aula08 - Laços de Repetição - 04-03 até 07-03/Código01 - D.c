#include <stdio.h>

int main()
{
	int contador;
	
	for(contador = 1; contador <= 20; contador += 2)
	{
		printf("5*%d = %d\n", contador, contador*5);
	}

 	return 0;
}