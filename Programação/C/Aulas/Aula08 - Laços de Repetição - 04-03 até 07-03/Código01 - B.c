#include <stdio.h>

int main()
{
	int contador = 1;

	while(contador <= 20)
	{
		printf("5*%d = %d\n", contador, 5*contador);
		contador = contador + 2;
	}

 	return 0;
}