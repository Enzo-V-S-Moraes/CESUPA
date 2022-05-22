#include <stdio.h>

int main()
{
	int idade;
	float peso;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	if(idade >= 12 && peso >= 60)
	{
		printf("Quantidade de gotas %d\n", 1000/25);
	}
	else if(idade >= 12 && peso < 60)
	{
		printf("Quantidade de gotas %d\n", 875/25);
	}
	else if(idade < 12 && peso >= 5 && peso <= 9)
	{
		printf("Quantidade de gotas %d\n", 125/25);
	}
	else if(idade < 12 && peso >= 9.1 && peso <= 16)
	{
		printf("Quantidade de gotas %d\n", 250/25);
	}
	else if(idade < 12 && peso >= 16.1 && peso <= 24)
	{
		printf("Quantidade de gotas %d\n", 375/25);
	}
	else if(idade < 12 && peso >= 24.1 && peso <= 30)
	{
		printf("Quantidade de gotas %d\n", 500/25);
	}
	else if(idade < 12 && peso > 30)
	{
		printf("Quantidade de gotas %d\n", 750/25);
	}
	
 	return 0;
}
