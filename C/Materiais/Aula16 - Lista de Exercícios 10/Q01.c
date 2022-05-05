#include <stdio.h>

float MediaProva(float nota01, float nota02, float nota03);

int main()
{
	float nota01, nota02, nota03, media;
	
	printf("Digite o valor da nota 01: ");
	scanf("%f", &nota01);
	
	printf("Digite o valor da nota 02: ");
	scanf("%f", &nota02);
	
	printf("Digite o valor da nota 03: ");
	scanf("%f", &nota03);
	
	media = MediaProva(nota01, nota02, nota03);
	
	printf("Media: %.2f", media);
	
 	return 0;
}


float MediaProva(float nota01, float nota02, float nota03)
{
	return (nota01 + nota02 + nota03)/3;
}