#include <stdio.h>

int main()
{
	int matriz[7][7];
	int i, j;
	
	for(i = 0; i < 7; i++)
	{
		for(j = 0; j < 7; j++)
		{
			matriz[i][j] = i*7+j;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(i = 0; i < 7; i++)
	{
		for(j = 0; j < 6-i; j++)
		{
			matriz[i][j] = i*7+j;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
 	return 0;
}