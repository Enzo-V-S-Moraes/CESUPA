#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int c;
	int i;
	
	printf("%d ", a);
	printf("%d ", b);
	
	for(i = 0; i < 10; i++)
	{
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	
 	return 0;
}