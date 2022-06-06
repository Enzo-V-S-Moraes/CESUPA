#include <stdio.h>

int main()
{
	// 10 - 
	int numCoelhos;
	float custo;
	
	printf("Digite a quantidade de coelhos:");
	scanf("%d", &numCoelhos);
	
	custo = (numCoelhos*0.7/18) + 10;
	
	printf("Custo: %.2f", custo);
	
 	return 0;
}