#include <stdio.h>

void Multiplos(int num);

int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	Multiplos(num);

 	return 0;
}


void Multiplos(int num)
{
	int i;
	for(i = 1; i <= num; i++)
	{
		if(i%3 == 0 && i%5 == 0)
		{
			printf("%d eh multiplo de 3 e 5!\n", i);
		}
	}
}