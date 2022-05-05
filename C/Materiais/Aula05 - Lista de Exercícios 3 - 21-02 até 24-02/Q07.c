/*
*	Questão 07
*
*	Desenvolva a lógica por trás do jogo Pedra, Papel e Tesoura. O jogo só
* precisa rodar um round e dizer quem venceu ou se o jogo deu empate.
* (Recomendo procurar como gerar número aleatório em C).
*/

#include <stdio.h>

// Necessário para importar rand, srand e time para gerar valores aleatórios
#include <stdlib.h>
#include <time.h>

void main()
{
	// Declarações das variáveis
	int escolhaJogador, escolhaComputador;
	
	// Aqui estou setando o ponto de referência para os valores aleatórios
	// esse valor é o responsável por fazer a função rand gerar valores diferentes
	srand(time(NULL));

	// Comunicação com o usuário e salvar a escolha na variável escolhaJogador	
	printf("Bem-Vindo ao jogo do Pedra, Papel e Tesoura!\n");
	printf("Escolha a sua jogada\n");
	printf("1- Pedra\n");
	printf("2- Papel\n");
	printf("3- Tesoura\n");
	printf("Escolha: ");
	scanf("%d", &escolhaJogador);
	
	// Aqui estou salvando na variável escolhaComputador um valor aleatório entre 0 e 89.
	// Dependendo do valor aleatório, vou considerar como a escolha do computador como uma das opções
	// Vou considerar como Pedra valores entre 0 e 29 
	// Vou considerar como Papel valores entre 30 e 59
	// Vou considerar como Tesoura valores entre 60 e 89
	escolhaComputador = rand() % 90;
	
	// Para cada escolha do jogador preciso comparar o resultado com a escolha do computador
	switch(escolhaJogador)
	{
		case 1: // Jogador escolheu Pedra
			if(escolhaComputador >= 0 && escolhaComputador < 30) // Computador escolheu Pedra
			{
				printf("Voce escolheu Pedra\n");
				printf("Computador escolheu Pedra\n");
				printf("Jogo Empatado!\n");
			}
			else if(escolhaComputador >= 30 && escolhaComputador < 60) // Computador escolheu Papel
			{
				printf("Voce escolheu Pedra\n");
				printf("Computador escolheu Papel\n");
				printf("Computador Ganhou!\n");
			}
			else // Computador escolheu Tesoura
			{
				printf("Voce escolheu Pedra\n");
				printf("Computador escolheu Tesoura\n");
				printf("Voce Ganhou!\n");
			}
			break;
			
		case 2: // Jogador escolheu Papel
			if(escolhaComputador >= 0 && escolhaComputador < 30) // Computador escolheu Pedra
			{
				printf("Voce escolheu Papel\n");
				printf("Computador escolheu Pedra\n");
				printf("Voce Ganhou!\n");
			}
			else if(escolhaComputador >= 30 && escolhaComputador < 60) // Computador escolheu Papel
			{
				printf("Voce escolheu Papel\n");
				printf("Computador escolheu Papel\n");
				printf("Jogo Empatado!\n");
			}
			else // Computador escolheu Tesoura
			{
				printf("Voce escolheu Papel\n");
				printf("Computador escolheu Tesoura\n");
				printf("Computador Ganhou!\n");
			}
			break;
			
		case 3: // Jogador escolheu Tesoura
			if(escolhaComputador >= 0 && escolhaComputador < 30) // Computador escolheu Pedra
			{
				printf("Voce escolheu Tesoura\n");
				printf("Computador escolheu Pedra\n");
				printf("Computador Ganhou!\n");
			}
			else if(escolhaComputador >= 30 && escolhaComputador < 60) // Computador escolheu Papel
			{
				printf("Voce escolheu Tesoura\n");
				printf("Computador escolheu Papel\n");
				printf("Voce Ganhou!\n");
			}
			else // Computador escolheu Tesoura
			{
				printf("Voce escolheu Tesoura\n");
				printf("Computador escolheu Tesoura\n");
				printf("Jogo Empatado!\n");
			}
			break;
		
		// Caso o usuário digitou um valor que não seja 1, 2 ou 3.
		default:
			printf("Comando invalido!\n");
	}
	
	printf("Obrigado por jogar!\n");
}







