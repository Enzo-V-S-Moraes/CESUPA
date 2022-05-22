#include <stdio.h>

//Repare a seguinte característica do número 3025:
//30 + 25 = 55 e 55^2 = 3025
//
//Criar um algorítmo que possa ler vários números inteiros de 4 algarismos, um de cada vez, e diga se o número
// apresenta a mesma característica. O algarismo   

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
