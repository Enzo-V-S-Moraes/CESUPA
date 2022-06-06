#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int mat[4][4];
	int i, j;
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j ++)
		{
			mat[i][j] = rand() % 1000;
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i = 0; i < 4; i++)
	{
		printf("%d\t", mat[i][i]);
	}
	
 	return 0;
}