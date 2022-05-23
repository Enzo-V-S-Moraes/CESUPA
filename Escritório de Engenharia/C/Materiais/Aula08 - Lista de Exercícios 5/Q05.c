/*
* Questão 05
*
* Apresentar a tabuada dos números de 1 a 10.
*/

#include <stdio.h>

int main()
{
	int i, j;
	for(j = 1; j <= 10; j++)
	{
		for(i = 1; i <= 10; i++)
		{
			printf("%d*%d = %d\n", j, i, j*i);
		}
		printf("\n-----------------\n\n");
	}
	
 	return 0;
}