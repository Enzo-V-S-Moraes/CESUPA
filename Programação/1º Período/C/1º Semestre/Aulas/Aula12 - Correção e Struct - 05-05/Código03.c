#include <stdio.h>

typedef struct data
{
	int dia;
	int mes;
	int ano;
} DATA;

typedef struct pessoa
{
	char nome[50];
	int idade;
	DATA nascimento;
} PESSOA;

void EscreverDados(PESSOA pessoa);

int main()
{

	PESSOA pessoa;
	
	printf("Digite seu nome: ");
	scanf("%s", &pessoa.nome);
	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);
	printf("Digite o dia do seu nascimento: ");
	scanf("%d", &pessoa.nascimento.dia);
	printf("Digite o mes do seu nascimento: ");
	scanf("%d", &pessoa.nascimento.mes);
	printf("Digite o ano do seu nascimento: ");
	scanf("%d", &pessoa.nascimento.ano);

	EscreverDados(pessoa);

 	return 0;
}


void EscreverDados(PESSOA pessoa)
{
	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Dia nascimento: %d/%d/%d", pessoa.nascimento.dia,
									   pessoa.nascimento.mes,
									   pessoa.nascimento.ano);
}