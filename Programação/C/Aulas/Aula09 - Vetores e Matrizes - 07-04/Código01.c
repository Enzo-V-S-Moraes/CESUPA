#include <stdio.h>

int main()
{
	float salario[12] = {0};
	float soma = 0;
	int i; // varrer o vetor
	
	// loop para receber o salário
	for(i = 0; i < 12; i++)
	{
		printf("Digite o salario do mes %d: \n", i+1);
		scanf("%f", &salario[i]);
		soma += salario[i];
	}
	
	// loop para escrever o salário
	for(i = 0; i < 12; i++)
	{
		printf("Salario do mes %d: %.2f\n", i+1, salario[i]);
	}
	
	printf("Soma dos salarios: %.2f", soma);
	
 	return 0;
}