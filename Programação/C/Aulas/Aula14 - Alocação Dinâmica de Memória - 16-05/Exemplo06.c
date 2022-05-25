#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int l = 3, c = 4;
	int i, j, count;
	int* arr[3];
	
	for(i = 0; i < l; i++)
		arr[i] = (int*) malloc(c*sizeof(int));
		
	count = 1;
	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
		{
			arr[i][j] = count;
			count++;
		}
	
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
			
	for(i = 0; i < l; i++)
	{
		free(arr[i]);
	}
	
 	return 0;
}