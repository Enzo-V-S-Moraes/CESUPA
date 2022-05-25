#include <stdio.h>

int main()
{
	char nome[100];
	int idade, custo;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 0 && idade <= 10)
	{
		custo = 30;
	}
	else if(idade >10 && idade <= 29)
	{
		custo = 60;
	}
	else if(idade > 29 && idade <= 45)
	{
		custo = 120;
	}
	else if(idade > 45 && idade <= 59)
	{
		custo = 150;
	}
	else if(idade > 59 && idade <= 65)
	{
		custo = 250;
	}
	else if(idade > 65)
	{
		custo = 400;
	}
	else
	{
		printf("Idade invalida! \n");
		custo = -1;
	}
	
	printf("Nome: %s \t Custo: %d", nome, custo);
 	return 0;
}