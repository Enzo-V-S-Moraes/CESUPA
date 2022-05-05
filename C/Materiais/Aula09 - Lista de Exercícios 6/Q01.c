#include <stdio.h>

int main()
{
	int maior = 0;
	int n, digitado;
	int i;
	
	printf("Digite a quantidade de valores: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("Digite qualquer numero: ");
		scanf("%d", &digitado);
		if(digitado > maior)
		{
			maior = digitado;
		}
	}
	
	printf("Maior valor: %d", maior);

 	return 0;
}