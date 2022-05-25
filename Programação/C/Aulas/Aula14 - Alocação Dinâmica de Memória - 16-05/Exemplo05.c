#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	ptr = (int*) calloc(n, sizeof(int));
	if(ptr == NULL)
	{
		printf("Erro na alocacao de memoria\n");
		exit(0);
	}
	else
	{
		printf("Memoria alocada com sucesso!\n");
		
		for(i = 0; i < n; i++)
			ptr[i] = i+1;
			
		for(i = 0; i < n; i++)
			printf("%d, ", ptr[i]);
		printf("\n\n");
		
		printf("Digite um novo tamanho para o vetor: ");
		scanf("%d", &n);
		
		ptr = realloc(ptr, n);
		
		for(i = 0; i < n; i++)
			ptr[i] = i+1;
			
		for(i = 0; i < n; i++)
			printf("%d, ", ptr[i]);
		printf("\n\n");			
	}
	
	free(ptr);
 	return 0;
}