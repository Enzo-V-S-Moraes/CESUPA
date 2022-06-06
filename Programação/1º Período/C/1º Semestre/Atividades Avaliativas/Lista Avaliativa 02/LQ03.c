#include <stdio.h>

int main()
{
	int numero;
	int primeiraParte, segundaParte, quadrado;
	
	printf("Digite um numero de 4 casas: ");
	scanf("%d", &numero);
	
	while(numero >= 1000 && numero <= 9999)
	{
		primeiraParte = numero/100;
		segundaParte = numero%100;
		
		quadrado = primeiraParte + segundaParte;
		quadrado = quadrado * quadrado;
		
		if(numero == quadrado)
		{
			printf("Numero com a caracteristica!\n\n\n");
		}
		else
		{
			printf("Numero nao possui a caracteristica!\n\n\n");
		}
		
		printf("Digite um numero de 4 casas: ");
		scanf("%d", &numero);
	}
	
 	return 0;
}