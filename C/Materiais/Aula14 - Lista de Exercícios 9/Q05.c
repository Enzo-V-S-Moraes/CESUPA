#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int m[3][3], m90[3][3];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			m[i][j] = rand() % 20;
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			m90[i][j] = m[2-j][i]; // linha por fazer a rotacao
		}
	}
	
	printf("##### Matriz Original #####\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n##### Matriz 90 #####\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", m90[i][j]);
		}
		printf("\n");
	}
	
 	return 0;
}