#include <stdio.h>

int Fatorial(int n);
int Arranjo(int n, int p);


int main()
{
	int n, p, resultado;
	
	printf("Digite a quantidade total de elementos: ");
	scanf("%d", &n);
	
	printf("Digite o tamanho do grupo do arranjo: ");
	scanf("%d", &p);
	
	resultado = Arranjo(n, p);
	
	printf("Arranjo: %d", resultado);
	
 	return 0;
}


int Fatorial(int n)
{
	int i, resultado;
	resultado = 1;
	
	if(n >= 2)
	{
		for(i = 2; i <= n; i++)
		{
			resultado *= i;
		}
		return resultado;
	}
	else
	{
		return 1;
	}
}

int Arranjo(int n, int p)
{
	if(n >= 0 && p <= n)
	{
		return Fatorial(n)/Fatorial(n-p);
	}
	else
	{
		return -1;
	}
}
}