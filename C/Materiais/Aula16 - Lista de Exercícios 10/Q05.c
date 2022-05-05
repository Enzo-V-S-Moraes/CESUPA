#include <stdio.h>

int MenorNumero(int tamanho, int vetor[]);

int main()
{	
	int i, tamanho, menorNumero;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite um numero para ser inserido no vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	menorNumero = MenorNumero(tamanho, vetor);
	
	printf("Menor numero do vetor: %d", menorNumero);
	
 	return 0;
}


int MenorNumero(int tamanho, int vetor[])
{
	int i, menorNumero;
	
	menorNumero = 9999;
	
	for(i = 0; i < tamanho; i++)
	{
		if(vetor[i] < menorNumero)
		{
			menorNumero = vetor[i];
		}
	}
	
	return menorNumero;
}