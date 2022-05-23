#include <stdio.h>

int main()
{
	int numero, tria;
	int i;
	
	tria = 0;
	i = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	while(numero != tria && tria < numero)
	{
		tria = i * (i+1) * (i+2);
		i++;
	}
	
	if(numero == tria)
	{
		printf("Numero eh triangular!\n");
		printf("%d = %dx%dx%d", numero, i-1, i, i+1);
	}
	else
	{
		printf("Numero nao eh triangular!\n");
	}
	
 	return 0;
}