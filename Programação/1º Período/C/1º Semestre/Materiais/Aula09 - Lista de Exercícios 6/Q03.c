#include <stdio.h>

int main()
{
	int ano = 0;
	int Juca, Chico;
	Chico = 150;
	Juca = 110;
	
	while(Juca < Chico)
	{
		ano += 1;
		Chico += 2;
		Juca += 3;
	}
	
	printf("Tempo: %d", ano);
	
 	return 0;
}