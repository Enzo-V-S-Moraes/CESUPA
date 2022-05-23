#include <stdio.h>

int main()
{
	int n;
	int i, j;
	
	printf("Digite a altura do diamante: ");
	scanf("%d", &n);
	
	int metade = (n+1)/2;
	// for para metade superior do diamante
	for(i = 1; i <= metade; i++)
	{
		// for para espaços
		for(j = 1; j <= metade - i; j++)
		{
			printf("-");
		}
		
		// for para xs
		for(j = 1; j <= 2*i-1; j++)
		{
			printf("x");
		}
		printf("\n");
	}
	
	int impar = 1;
	
	if(n%2 == 0)
	{
		impar = 0;
	}
	
	// for para metade inferior do diamante
	for(i = impar; i <= metade - 1; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("-");
		}
		for(j = 1; j <= 2*((metade-1)-(i-1))-1; j++)
		{
			printf("x");
		}
		printf("\n");
	}
	
 	return 0;
}