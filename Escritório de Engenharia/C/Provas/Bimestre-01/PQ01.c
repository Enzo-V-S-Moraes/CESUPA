#include <stdio.h>
#include <string.h>


int main(){
	char nome[100];
	int idade;
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 0 && idade <= 10){
		printf("Nome: %s\t Valor: 0%.2f", nome, 30.00);
	}else if(idade > 10 && idade <= 29){
		printf("Nome: %s\t Valor: %.2f", nome, 60.00);
	}else if(idade > 29 && idade <= 45){
		printf("Nome: %s\t Valor: %.2f", nome, 120.00);
	}else if(idade > 45 && idade <= );
	
	return 0
}
