#include <stdio.h>

int EhConsoante(char simbolo);

int main()
{

	char simbolo;
	
	printf("Digite um caracter: ");
	scanf("%c", &simbolo);

	printf("%d\n", EhConsoante(simbolo));

 	return 0;
}

int EhConsoante(char simbolo)
{
	simbolo = toupper(simbolo);
	
	if(simbolo == 'A' || simbolo == 'E' ||
	   simbolo == 'I' || simbolo == 'O' ||
	   simbolo == 'U' || simbolo < 65 || simbolo > 90)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}