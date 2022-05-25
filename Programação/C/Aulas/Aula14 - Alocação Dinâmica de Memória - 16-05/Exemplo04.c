#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *ptr;
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	ptr = (float*) calloc(n, sizeof(float));
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
			printf("%.2f, ", ptr[i]);
	}
	
	free(ptr);
 	return 0;
}