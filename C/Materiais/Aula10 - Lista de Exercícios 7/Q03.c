#include <stdio.h>
#include <math.h>
int main()
{
	int numero, aux, soma;
	soma = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	aux = numero;
	
	while(aux > 0)
	{
		soma += pow(aux%10, 3);
		aux = aux / 10;
	}
	
	if(soma == numero)
	{
		printf("Numero de Armstrong!\n");
	}
	
	printf("numero: %d\n", numero);
	printf("Soma: %d\n", soma);
	
 	return 0;
}