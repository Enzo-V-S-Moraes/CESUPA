#include <stdio.h>
#include <time.h>

int main()
{
	int mat[4][4];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			mat[i][j] = rand() % 1000;
		}
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(i == j)
			{
				printf("%d\t", mat[i][j]);
			}
		}
	}
	
 	return 0;
}#include <stdio.h>
#include <time.h>

int main()
{
	int mat[4][4];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			mat[i][j] = rand() % 1000;
		}
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(i == j)
			{
				printf("%d\t", mat[i][j]);
			}
		}
	}
	
 	return 0;
}