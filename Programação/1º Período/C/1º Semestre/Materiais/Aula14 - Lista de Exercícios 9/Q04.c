#include <stdio.h>

int main()
{
	int C[3][2], Ct[2][3];
	int i, j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Digite um valor: ");
			scanf("%d", &C[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			Ct[j][i] = C[i][j];
		}
	}
	
	printf("\n\n");
	
	for(j = 0; j < 2; j++)
	{
		for(i = 0; i < 3; i++)
		{
			printf("%d\t", Ct[j][i]);
		}
		printf("\n");
	}
	
 	return 0;
}