#include <stdio.h>

int main()
{
	char velha[3][3] = {{' ', ' ', ' '},
						 {' ', ' ', ' '},
						 {' ', ' ', ' '}};					 
	int i, j;
	
	velha[0][0] = 'X';
	velha[0][2] = 'O';
	velha[1][1] = 'X';
	velha[2][2] = 'O';
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%c\t", velha[i][j]);
		}
		printf("\n");
	}
	
 	return 0;
}