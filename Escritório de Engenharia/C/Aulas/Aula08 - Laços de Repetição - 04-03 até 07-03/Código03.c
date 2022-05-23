#include <stdio.h>

int main()
{
	int numero;
	char caractere;
	
	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	printf("Digite a quantidade de repeticoes: \n");
	scanf("%d", &numero);
	
	for(int i = 0; i < numero; i++)
	{
		for(int j = 0; j < numero; j++)
		{
			printf("%c", caractere);
		}
		printf("\n");
	}
	
 	return 0;
}