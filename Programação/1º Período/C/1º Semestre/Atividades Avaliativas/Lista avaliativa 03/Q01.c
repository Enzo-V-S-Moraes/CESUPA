#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// Declaração das variáveis
	char nomes[10][100] = {""}; // Armazena 10 nomes de clientes de 100 caracteres
	char nome[100] = {""}; // Nome para fazermos a busca na opção 2
	
	float milhas[10] = {0.0}; // Armazena 10 milhagem de clientes
	float maiorMilha = 0.0; // Auxiliar na busca da maior milhagem
	float menorMilha = 9999.0; // Auxiliar na busca da menor milhagem
	
	int escolha; // Variável para armazenar a escolha da opção do usuário
	int indexMaior; // Armazena o index para o maior valor da milhagem
	int indexMenor; // Armazena o index para o maior valor da milhagem
	int i; // variável de controle para laçõs de repetições
	
	/*
		A variável contadorCliente tem como objetivo de contar quantos clientes estão
			cadastrados.
		Responsável por dizer aonde devemos coloar as informações no index dos nossos
			vetores
	*/
	int contadorClientes = 0;
	
	
	// Como o algoritmo só pode finalizar ao escolher a opção 5. A lógica inteira do
	// código deve ficar dentro de um laço de repetição.
	do
	{
		system("cls || clear");
		printf("********************\n");
		printf("*       MENU       *\n");
		printf("********************\n");
		printf("1- Cadastrar dados do cliente.\n");
		printf("2- Listar milhagem do cliente.\n");
		printf("3- Imprimir os nomes que tem maior e menor milhagem.\n");
		printf("4- Imprimir os nomes e as milhagem de todos os clientes cadastrados.\n");
		printf("5- Sair.\n");
		printf("Escolha: ");
		scanf("%d", &escolha);
		
		switch(escolha)
		{
			case 1: // Cadastar cliente
				system("cls || clear"); //limpar a tela
				
				if(contadorClientes < 10) // se tiver menos que 10 clientes, pode fazer o cadastro
				{
					printf("### Cadastrando Cliente N. %d ###\n", contadorClientes+1);
				
					printf("Digite o nome do cliente: ");
					fflush(stdin); // Limpar a memória do buffer de input
					gets(nomes[contadorClientes]);
				
					printf("Digite a milhagem do cliente: ");
					scanf("%f", &milhas[contadorClientes]);
					contadorClientes++; // Como um cliente foi cadastrado, somar 1 unidade
				
					printf("### Cliente Cadastrado ###\n");
				}
				else
				{
					printf("!!! Limite Maximo Alcancado !!!\n");
				}
				
				system("PAUSE"); // pausar execução até uma tecla ser apertada	
				break;
			
			case 2: // Listar cliente
				system("cls || clear"); //limpar a tela
				printf("### Listar Milhagem de Cliente ###\n");
				
				if(contadorClientes == 0) // Verificando se nao há clientes cadastrados
				{
					printf("!!! Nenhum Cliente Cadastrado !!!\n");
				}
				else
				{
					printf("Digite o nome do cliente que deseja buscar: ");
					fflush(stdin); // Limpar a memória do buffer de input
					gets(nome);
					
					for(i = 0; i < contadorClientes; i++) // varrer todos os nomes cadastrados até o momento
					{
						if(strcmp(nome, nomes[i]) == 0) // Verifica se o nome é igual ao digitado
						{
							printf("# Cliente Encontrado! #\n");
							printf("\t Milhagem: %.2f\n", milhas[i]);
							break; // sair do laço for
						}
					}
					
					if(i == contadorClientes) // para i ser igual ao contador, devemos chegar no final do laço for
					{
						printf("!!! Cliente Nao Encontrado !!! \n");
					}
				}
				
				system("PAUSE"); // pausar execução até uma tecla ser apertada
				break;
				
			case 3: // Imprimir maior e menor milhagem
				system("cls || clear"); //limpar a tela
				printf("### Maior e Menor Milhagem ###\n");
				
				if(contadorClientes == 0) // Verificando se nao há clientes cadastrados
				{
					printf("!!! Nenhum Cliente Cadastrado !!!\n");
				}
				else
				{
					for(i = 0; i < contadorClientes; i++) // varer todos os valores do vetor milhagem cadastrado
					{
						if(milhas[i] > maiorMilha) // salvar o maior valor encontrado e sua posicao no vetor
						{
							maiorMilha = milhas[i];
							indexMaior = i;
						}
					
						if(milhas[i] < menorMilha) // salvar o menor valor encontrado e sua posicao no vetor
						{
							menorMilha = milhas[i];
							indexMenor = i;
						}
					}
					
					printf("# Maior Milhagem #\n");
					printf("\tNome: %s\n", nomes[indexMaior]);
					printf("\tMilhas: %.2f\n\n", milhas[indexMaior]);
					
					printf("# Menor Milhagem #\n");
					printf("\tNome: %s\n", nomes[indexMenor]);
					printf("\tMilhas: %.2f\n\n", milhas[indexMenor]);
				}
				
				system("PAUSE"); // pausar execução até uma tecla ser apertada
				break;
				
			case 4: // Imprimir todos os clientes
				system("cls || clear"); //limpar a tela
				printf("### Imprimir Lista de Clientes ###\n");
				
				if(contadorClientes == 0) // Verificando se nao há clientes cadastrados
				{
					printf("!!! Nenhum Cliente Cadastrado !!!\n");
				}
				else
				{
					for(i = 0; i < contadorClientes; i++)
					{
						printf("# Cliente N. %d # \n", i+1);
						printf("\tNome: %s\n", nomes[i]);
						printf("\tMilhas: %.2f\n\n", milhas[i]);
					}
				}
				
				system("PAUSE"); // pausar execução até uma tecla ser apertada
				break;
				
			case 5: // Terminando algoritmo, escrever mensagem de finalização
				system("cls || clear"); //limpar a tela
				printf("### Fechando Software! ###\n");
				break;
			
			default: // Comando invalido, escrever mensagem de erro!
				system("cls || clear"); //limpar a tela
				printf("\n!!! Opcao Invalida !!!\n");
				system("PAUSE"); // pausar execução até uma tecla ser apertada
		}
	}
	while(escolha != 5);
	
 	return 0;
}