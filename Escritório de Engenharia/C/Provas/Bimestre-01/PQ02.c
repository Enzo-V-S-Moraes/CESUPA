#include <stdio.h>

//Desenvolver um código onde o usuário entre com um número e o código verifica se o número é triangular.
//
//Um número é triangular quando o é resultado do produto de três números consecutivos.
//

int main(){
	int numero, tria, i;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	tria = 0;
	i = 1;
	
	while(tria < numero){
		tria = i * (i+1) * (i+2);
		
		if(tria == numero){
			printf("Numero eh triangular\n");
			printf("%d = %d x %d x %d", numero, i, i+1, i+2);
		}
		
		i++;
		
	}
	
	return 0;
}
