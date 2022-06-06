#include <stdio.h>

int main()
{
	int inf, sup, inc;
	int i;
	
	printf("Tabela de graus Celsius para Fahrenheit\n");
	
	printf("Digite a menor temperatura (C): ");
	scanf("%d", &inf);
	printf("Digite a maior temperatura (C): ");
	scanf("%d", &sup);
	printf("Digite o quanto incrementar: ");
	scanf("%d", &inc);
	
	printf("C \t F\n");
	for(i = inf; i <= sup; i+= inc)
	{
		printf("%d \t %d\n", i, 9*i/5 + 32);
	}
	
 	return 0;
}