#include <stdio.h>

linha();

int main()
{
	int i;
	
	linha();
	
	printf("\n");
	
	printf("Numero entre 1 e 5 \n");
	
	linha();
	
	printf("\n");	
	
	for(i = 1; i <= 5; i++)
		printf("%d\n", i);
		
	linha();
	
 	return 0;
}


//AQUI
linha()
{
	int i;
	for(i = 0; i < 20; i++)
		printf("*");
}