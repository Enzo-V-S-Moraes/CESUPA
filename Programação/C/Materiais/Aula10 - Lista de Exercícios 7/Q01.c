#include <stdio.h>

int main()
{
	int i;
	int a, b, c;
	
	printf("Digite o valor do 1 termos: ");
	scanf("%d", &a);
	
	printf("Digite o valor do 2 termos: ");
	scanf("%d", &b);
	
	printf("1 termo: %d\n", a);
	printf("2 termo: %d\n", b);
	
	for(i = 3; i <= 10; i++)
	{
		if(i%2 == 0)
		{
			c = b - a;
		}
		else
		{
			c = b + a;
		}
		
		printf("%d termo: %d\n", i, c);
		
		a = b;
		b = c;
	}
	
 	return 0;
}