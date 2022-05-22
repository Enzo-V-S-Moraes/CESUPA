#include <stdio.h>

int main()
{
	int contador = 1;
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	while(contador <= 20)
	{
		printf("%d*%d = %d\n", numero, contador, numero*contador);
		contador = contador + 1;
	}

 	return 0;
}