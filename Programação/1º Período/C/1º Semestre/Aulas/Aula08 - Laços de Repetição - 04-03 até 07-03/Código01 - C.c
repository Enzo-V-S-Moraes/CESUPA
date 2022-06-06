#include <stdio.h>

int main()
{
	int contador = 1;
	do
	{
		printf("5*%d = %d\n", contador, contador*5);
		contador = contador + 1;
	}
	while(contador <= 20);
	
	
 	return 0;
}