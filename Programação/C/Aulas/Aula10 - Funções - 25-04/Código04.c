#include <stdio.h>

int y = 7;

funcao()
{
	int x = 10;
	printf("%d\n", x);
}

int main()
{
	int x = 5;
	printf("%d\n", x);
	
	funcao();
	
	printf("%d", y);
	
 	return 0;
}