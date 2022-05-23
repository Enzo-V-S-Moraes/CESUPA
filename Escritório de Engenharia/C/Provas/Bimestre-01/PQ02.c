#include <stdio.h>

//Desenvolver um c�digo onde o usu�rio entre com um n�mero e o c�digo verifica se o n�mero � triangular.
//
//Um n�mero � triangular quando o � resultado do produto de tr�s n�meros consecutivos.
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
