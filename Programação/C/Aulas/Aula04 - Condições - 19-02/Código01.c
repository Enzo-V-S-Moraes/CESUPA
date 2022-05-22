#include <stdio.h>

void main()
{
	int numero1;
	int numero2;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &numero1);
	printf("Digite um valor inteiro: ");
	scanf("%d", &numero2);
	
	printf("%d == %d eh %d\n", numero1, numero2, numero1 == numero2);
	printf("%d != %d eh %d\n", numero1, numero2, numero1 != numero2);
	printf("%d >= %d eh %d\n", numero1, numero2, numero1 >= numero2);
	printf("%d <= %d eh %d\n", numero1, numero2, numero1 <= numero2);
	printf("%d > %d eh %d\n", numero1, numero2, numero1 > numero2);
	printf("%d < %d eh %d\n", numero1, numero2, numero1 < numero2);
}