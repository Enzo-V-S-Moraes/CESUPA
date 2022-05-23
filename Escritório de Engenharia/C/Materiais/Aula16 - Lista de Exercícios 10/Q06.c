#include <stdio.h>

void EscreverMatriz(int matriz[3][3]);
void TrocarLinha(int matriz[3][3], int linha01, int linha02);

int main()
{
	int matriz[3][3];
	int i, j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Digite um valor para inserir na matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("##### Matriz Original #####\n");
	EscreverMatriz(matriz);
	printf("\n");
	
	printf("##### Matriz com a troca na linha 0 e 2 #####\n");
	TrocarLinha(matriz, 0, 2);
	
 	return 0;
}


void EscreverMatriz(int matriz[3][3])
{
	int i, j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
}


void TrocarLinha(int matriz[3][3], int linha01, int linha02)
{
	int i, aux;
	
	for(i = 0; i < 3; i++)
	{
		aux = matriz[linha01][i];
		matriz[linha01][i] = matriz[linha02][i];
		matriz[linha02][i] = aux;
	}
	
	EscreverMatriz(matriz);
}