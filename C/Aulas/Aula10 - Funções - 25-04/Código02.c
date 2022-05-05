#include <stdio.h>

linha(int tamanho, char simbolo);

int main()
{
	linha(3, '*');
	linha(5, '-');
	linha(7, '+');
	linha(5, 'b');
	linha(3, '%');	
 	return 0;
}


linha(int tamanho, char simbolo)
{
	int i;
	for(i = 0; i < tamanho; i++)
		printf("%c", simbolo);
	printf("\n");
}