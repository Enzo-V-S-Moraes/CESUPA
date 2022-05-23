#include <stdio.h>

//Repare a seguinte caracter�stica do n�mero 3025:
//30 + 25 = 55 e 55^2 = 3025
//
//Criar um algor�tmo que possa ler v�rios n�meros inteiros de 4 algarismos, um de cada vez, e diga se o n�mero
// apresenta a mesma caracter�stica. O algarismo   

int main(){
	int numero;
	int primeiro, segundo, quadrado;
	
	printf("Digite um numero de 4 casas: ");
	scanf("%d", &numero);
	
	while(numero >= 1000 && numero <= 9999){
		primeiro = numero / 100;
		segundo = numero % 100;
		
		quadrado = primeiro + segundo;
		quadrado = quadrado * quadrado;
		
		if(numero == quadrado){
			printf("Numero possui a caracteristica\n");
		}
	}
	
	return 0;
}
