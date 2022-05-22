#include <stdio.h>

typedef struct Pessoa
{
	int idade;
	float salario;
} PESSOA;

void Cadastro(PESSOA *pessoa)
{
	int idade; float salario;
	printf("Digite sua idade: ");
	scanf("%d", &pessoa->idade);
	printf("Digite salario: ");
	scanf("%f", &pessoa->salario);
};

void Escrever(PESSOA pessoa)
{
	printf("Idade: %d \n\n", pessoa.idade);
	printf("Salario: %f \n\n", pessoa.salario);
};

int main()
{
	PESSOA pedro;
	
	Cadastro(&pedro);
	Escrever(pedro);

 	return 0;
}
