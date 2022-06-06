/*
* Desenvolva um algoritmo que tenha uma estrutura polígono e uma função que recebe
* um polígono e retorna a soma dos ângulos internos. 
*/

#include <stdio.h>


// structs
typedef struct POLIGONO
{
	int nLados;
} POLIGONO;


// funções
float SomaAnguloInterno(POLIGONO figura);


// main
int main()
{
	POLIGONO poligono;
	float resultado;
	
	printf("Digite o numero de lados da figura: ");
	scanf("%d", &poligono.nLados);
	
	resultado = SomaAnguloInterno(poligono);
	
	printf("Resultado: %.2f", resultado);

 	return 0;
}


// corpo funções
float SomaAnguloInterno(POLIGONO figura)
{
	return (figura.nLados-2)*180;
}