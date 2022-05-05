#include <stdio.h>

void DecToBin(int numeroDec);

int main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);

	DecToBin(numero);

 	return 0;
}


void DecToBin(int numeroDec)
{
	int i, j;
	int bin[100] = {0};
	
	// Calculo binario
	for(i = 0; numeroDec != 0; i++)
	{
		bin[i] = numeroDec % 2;
		numeroDec = numeroDec / 2;
	}

	// Imprimir Resultado
	for(j = i; j >= 0; j--)
	{
		printf("%d", bin[j]);
	}
}