#include <stdio.h>

int main()
{
	char ch = 'A';
	char *ptr = &ch;
	
	printf("Valor ch: %c\n", ch);
	printf("Endereco ch: %d\n\n", &ch);
	
	printf("Endereco apontado: %d\n", ptr);
	printf("Valor apontado: %c\n", *ptr);
	printf("Endereco ponteiro: %d\n\n", &ptr);
	
	ch = 'U';
	
	printf("Endereco apontado: %d\n", ptr);
	printf("Valor apontado: %c\n", *ptr);
	printf("Endereco ponteiro: %d\n\n", &ptr);
	
	*ptr = 'Z';

	printf("Valor ch: %c\n", ch);
	printf("Endereco ch: %d\n\n", &ch);
	
 	return 0;
}