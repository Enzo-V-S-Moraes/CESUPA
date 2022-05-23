#include <stdio.h>

int main()
{
	float A[10], B[10];
	int i;
	
	// Laço for para inserir valores no vetor A
	for(i = 0; i <= 9; i++)
	{
		printf("Digite um valor: ");
		scanf("%f", &A[i]);
	}
	
	// Laço for para imprimir os valores do vetor A
	printf("Vetor A: \n");
	for(i = 0; i <= 9; i++)
	{
		printf("%.2f \t", A[i]);
	}
	
	// Laço for para gerar os valores do vetor B
	for(i = 0; i <= 9; i++)
	{
		if(i%2 == 0) //i é par
		{
			B[i] = A[i]*3;
		}
		else // i é impar
		{
			B[i] = A[i]/2.0;
		}
	}
	
	// Laço for para imprimir os valores do vetor B
	printf("Vetor B: \n");
	for(i = 0; i <= 9; i++)
	{
		printf("%.2f \t", B[i]);
	}
	
 	return 0;
}