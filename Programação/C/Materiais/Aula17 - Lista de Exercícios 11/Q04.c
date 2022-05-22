#include <stdio.h>

void MultiplicacaoVetores(int A[], int B[], int tamanho);

int main()
{
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int a[tamanho], b[tamanho];
	int i;
	
	printf("Vetor A \n");
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &a[i]);
	}
	
	printf("Vetor B \n");
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &b[i]);
	}
	
	MultiplicacaoVetores(a, b, tamanho);
	
 	return 0;
}


void MultiplicacaoVetores(int A[], int B[], int tamanho)
{
	int i;
	
	for(i = 0; i < tamanho; i++)
	{
		printf("A[%d]xB[%d] = %d\n", i, i, A[i]*B[i]);
	}
}