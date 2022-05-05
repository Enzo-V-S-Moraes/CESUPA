#include <stdio.h>

void Funcao(int A[], char B[], int tamanho);

int main()
{
	int tamanho;
	int i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int X[tamanho];
	char Y[tamanho];
	
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &X[i]);
	}
	printf("\n");
	
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite um caractere: ");
		fflush(stdin);
		scanf("%c", &Y[i]);
	}
	
	Funcao(X, Y, tamanho);
	
 	return 0;
}


void Funcao(int A[], char B[], int tamanho)
{
	int i, j;
	//Processo da função
	for(i = 0; i < tamanho; i++)
	{
		for(j = 0; j < A[i]; j++)
		{
			printf("%c", B[i]);
		}
		printf("\n");
	}
}