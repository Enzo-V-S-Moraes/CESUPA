/*
* Desafio Puppy and Sum do usuário pavel1996 do site CodeChef
* Usuário: https://www.codechef.com/users/pavel1996
* Desafio: https://www.codechef.com/problems/PPSUM
*/
#include <stdio.h>

int main()
{
	int d, n;
	int soma;
	
	printf("Digite o valor de D: ");
	scanf("%d", &d);
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	for(int i = 0; i < d; i++)
	{
		soma = 0;
		for(int j = 0; j < n; j++)
		{
			soma += (j+1);
		}
		n = soma;
	}
	
	printf("Soma: %d", soma);
	
 	return 0;
}