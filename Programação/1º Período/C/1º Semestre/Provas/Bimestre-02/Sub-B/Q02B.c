#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// STRUCT
typedef struct aluno
{
	char nome[50];
	float n1, n2, n3;
	float media;
} ALUNO;


// CABECALHO FUNÇÕES
void Inicializar(ALUNO *aluno);
void Cadastrar(ALUNO *aluno);
void Media(ALUNO *aluno);
void Informacao(ALUNO *aluno);
void Listar(ALUNO *aluno);
void Aprovados(ALUNO *aluno);
void Sair();
void Invalido();


// MAIN
int main()
{
	ALUNO alunos[15];
	int escolha;
	
	Inicializar(alunos);
	do
	{
		system("cls");
		printf("##### ESCOLA VIVA #####\n");
		printf("1- Cadastrar\n");
		printf("2- Calcular Media\n");
		printf("3- Gerar Lista\n");
		printf("4- Aprovados\n");
		printf("5- Sair\n");
		printf("Escolha: "); scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			Cadastrar(alunos);
		}
		else if(escolha == 2)
		{
			Media(alunos);
		}
		else if(escolha == 3)
		{
			Listar(alunos);
		}
		else if(escolha == 4)
		{
			Aprovados(alunos);
		}
		else if(escolha == 5)
		{
			Sair();
		}
		else
		{
			Invalido();
		}
		
		system("pause");
	}
	while(escolha != 5);
	
 	return 0;
}


// FUNÇÕES
void Inicializar(ALUNO *aluno)
{
	int i;
	for(i = 0; i < 15; i++)
	{
		strcpy(aluno[i].nome, " ");
		aluno[i].n1 = aluno[i].n2 = aluno[i].n3 = aluno[i].media = 0; 
	}
}


void Cadastrar(ALUNO *aluno)
{
	int i;
	
	system("cls");
	printf("##### CADASTRAR #####\n");
	for(i = 0; i < 15; i++)
	{
		if(strcmp(aluno[i].nome, " ") == 0)
		{
			printf("\tCadastrando Aluno ID: %d\n", i+1);
			printf("\tNome: "); fflush(stdin); gets(aluno[i].nome);
			printf("\tNota 01: "); scanf("%f", &aluno[i].n1);
			printf("\tNota 02: "); scanf("%f", &aluno[i].n2);
			printf("\tNota 03: "); scanf("%f", &aluno[i].n3);
			
			printf("\n### CADASTRO COMPLETO ###\n");
			break;
		}
	}
}


void Media(ALUNO *aluno)
{
	int i;
	
	system("cls");
	printf("##### CALCULANDO MEDIA #####\n");
	for(i = 0; i < 15; i++)
	{
		if(strcmp(aluno[i].nome, " ") != 0)
		{
			aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3.0;
		}
		else
		{
			break;
		}
	}
	printf("\t### MEDIAS CALCULADAS ###\n\n");
}


void Informacao(ALUNO *aluno)
{
	printf("\tNome: %s\n", aluno->nome);
	printf("\tNota 01: %.2f\n", aluno->n1);
	printf("\tNota 02: %.2f\n", aluno->n2);
	printf("\tNota 03: %.2f\n", aluno->n3);
	printf("\tMedia: %.2f\n", aluno->media);
	printf("#############################\n\n");
}


void Listar(ALUNO *aluno)
{
	int i;
	system("cls");
	printf("##### LISTA TODOS OS ALUNOS #####\n");
	for(i = 0 ; i < 15; i++)
	{
		if(strcmp(aluno[i].nome, " ") != 0)
		{
			printf("\tALUNO ID: %d\n", i+1);
			Informacao(&aluno[i]);
		}
		else
		{
			break;
		}
	}
}


void Aprovados(ALUNO *aluno)
{
	int i;
	
	system("cls");
	printf("##### LISTA APROVADOS #####\n");
	for(i = 0; i < 15; i++)
	{
		if(strcmp(aluno[i].nome, " ") != 0)
		{
			if(aluno[i].media >= 7.0)
			{
				printf("\tALUNO ID: %d\n", i+1);
				Informacao(&aluno[i]);
			}
		}
		else
		{
			break;
		}
	}
}


void Sair()
{
	system("cls");
	printf("##### FECHANDO SOFTWARE #####\n");
}


void Invalido()
{
	printf("\n\t ! COMANDO INVALIDO !\n");
}