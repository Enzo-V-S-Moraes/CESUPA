/*1. Introdução
Role-Playing Game, também conhecido como RPG, é um tipo de jogo em que
os jogadores assumem papéis de personagens e criam narrativas
colaborativamente. O progresso de um jogo se dá de acordo com um sistema de
regras predeterminado, dentro das quais os jogadores podem improvisar
livremente.
Jogos de RPG japoneses (comumente conhecidos como JRPG) são jogos que
possuem características distintas dos RPGs ocidentais.
O desenvolvimento de jogos do gênero RPG é fortemente influenciado por
RPGs de mesa, como Dungeons and Dragons. Antes da disseminação do
Famicom ou de outros consoles de jogos, os jogos de computador eram bastante
populares no Japão. Durante a década de 1980, os RPGs japoneses começaram
a aparecer no mercado.
Em 1985, Yuji Hori, um designer de jogos japonês, criou um jogo chamado
Dragon Quest que pegou pedaços de vários RPGs como Wizardry, Ultima e Black
Onyx. A coisa revolucionária que Dragon Quest fez foi tornar o gênero RPG mais
acessível aos jogadores. Dragon Quest é conhecido como um RPG leve porque
não exige que o jogador desenhe seus próprios mapas, memorize nomes
específicos de feitiços ou comandos. Dragon Quest também simplificou as
estatísticas implementando HP, MP, EXP e níveis em vez de sistemas complexos
vistos em RPGs anteriores. Dragon Quest não exigia que o jogador aprendesse
muitas regras complicadas, mas oferecia uma história intrigante com jogabilidade
intuitiva.

2. Projeto
O objetivo do projeto é desenvolver um sistema de combate em turno que será
aplicado em um jogo de JRPG.
Ao iniciar o aplicativo, o jogador se depara com um menu inicial. Contendo a
opção de começar o jogo, contar a história que envolve o jogo e fechar jogo.
Ao escolher a opção história, deve ser mostrado um texto contando uma breve
história do seu mundo de fantasia e o principal motivo do personagem querer
enfrentar o desafio.
A opção começar jogo inicializa o jogo, que segue o fluxograma da Figura 1. O
jogador criará seu personagem que tentará vencer três combates, onde a cada
vitória de um combate dará uma recompensa para o jogador. O jogo vai se
tornando mais difícil à medida que vencemos os combates.
Se as três lutas forem vencidas, chegaremos em uma tela de vitória, e se
perdemos um combate, uma tela de derrota é mostrada e voltaremos para o início
do jogo.

2.1. Criação de Personagem
O personagem do jogo contém as seguintes características:
• Status Básicos:
o Nome;
o P.V. (Ponto de Vida);
• Atributos:
o Força;
o Constituição;
o Agilidade;
o Destreza;
• Equipamentos:
o Arma;
o Armadura.

A força influencia no dado da arma pesada. Constituição influencia na
quantidade de P.V. e na defesa. Agilidade influencia na ordem dos turnos durante o
combate. Destreza influencia no dano da arma leve.
As armas possuem as seguintes características:
• Arma:
o Categoria;
o Dano.

A categoria de uma arma pode ser dois: pesada e leve, na qual influência no
valor do dano.
O dano de uma arma pesada é calculada pela soma da rolagem de um dado
de 12 lados (d12) mais 1,5 do valor da força e mais um valor constante.
O dano de uma arma leve é calculada pela soma da rolagem de dois dados de
6 lados (d6) mais a rolagem de um dado de 4 lados (d4) mais o valor da destreza
mais o valor de uma constante.
As armaduras possuem as seguintes características:
• Armadura:
o Defesa.

A defesa da armadura é calculada a partir de um número constante mais 1,5
do valor da constituição.
O ponto de vida é calculado pela soma da rolagem de três dados de 6 lados
(d6) mais o valor da constituição.
Resumindo as características temos:
• Status Básicos:

o P.V. = d6 + d6 + d6 + Cons.;
• Equipamentos:
o Arma Pesada = K + d12 + 1,5*For.;
o Arma Leve = K + d6 + d6 + d4 + Des.;
o Armadura = K + 1,5*Cons.;

Ao começar a criação do personagem (Figura 2), o jogador deve dar um nome
ao personagem, distribuir 15 pontos nos atributos e escolher uma armar e armadura.
Onde o usuário poderá escolher uma das 3 armas iniciais e uma das 3 armaduras
iniciais.

2.2. Combate
No combate, o personagem lutará contra um adversário, que contêm as
seguintes características:
• Adversário:
o Nome;
o P.V. (Ponto de Vida);
o Dano;
o Defesa;
o Agilidade.

O P.V. do adversário, defesa e agilidade são valores constantes decido pelo
programador. O dano do adversário poder ser um valor constante ou um valor
aleatório, essa decisão e esses valores fica a critério do desenvolvedor.
O combate envolve a sequência apresentada na Figura 3. Ao iniciar o combate,
deve ser verificado quem é mais rápido (maior valor na agilidade), caso seja o jogador,
ele terá o primeiro round, se não o primeiro round vai para o adversário. Após ambos
fazerem suas jogadas, verificamos se alguém morreu (P.V. igual ou menor que zero),
se o jogador morreu, o jogo termina e voltamos para o menu principal; se o adversário
morreu, o jogador ganha sua recompensa e passamos para a próxima luta; se
ninguém morreu, o jogador e o adversário jogam mais um round, e isso se repete até
alguém morrer.

O adversário deverá ser escolhido de forma aleatória para cada combate,
fazendo o jogo ser aproveitado mais de uma vez.

2.3. Turno Jogador
No turno do jogador terão três ações disponíveis:
• Ações:
o Atacar;
o Defender;
o Usar Poção.

A ação atacar faz o personagem causar dano ao adversário. O dano causado
no adversário é calculado pegando o valor do dano da armada do jogador menos a
armadura do adversário. Com o valor do dano calculado, subtrai-se do P.V. do
adversário.
Defender dobra o valor da defesa do personagem por 1 round.
Usar Poção recupera os P.V. do jogador, esse valor é calculando fazendo a
soma da rolagem de três dados de 6 lados. O jogador só tem acesso a três poções
por combate.
2.4. Turno Adversário
Mesma ideia do jogador, porém quem escolhe a ação é o computador. Um
número aleatório entre 0 e 2 é gerado e a partir desse valor uma ação é selecionado.

• Ações:
o 0 - Atacar;
o 1 - Defender;
o 2 - Usar Poção.

2.5. Premiação
Ao vencer cada combate, o jogador receberá uma premiação.
• Primeira Premiação:
o Subir um level;
o Mais P.V.;
o Opção de escolher uma nova armar de 3 opções disponíveis.
Ao subir um level, o jogador ganhar mais 5 pontos de atributos para serem
distribuídos.
O novo valor do P.V. é feito pegando o antigo valor máximo de P.V. e
acrescenta o valor da constituição.
O usuário poderá escolher uma das 3 armas apresentadas, essas novas armas
devem ser mais fortes do que as armas iniciais.

• Segunda Premiação:
o Subir dois leveis;
o Mais P.V.
o Opção de escolher uma nova armadura de 3 opções disponíveis.
Ao subir dois leveis, o jogador ganhar mais 10 pontos de atributos para serem
distribuídos.
O novo valor do P.V. é feito pegando o antigo valor máximo de P.V. e
acrescenta o valor da constituição.
O usuário poderá escolher uma das 3 armaduras apresentadas, essas novas
armaduras devem ser mais fortes do que as armaduras iniciais.

• Terceira Premiação:
o Fim do jogo.

Na terceira premiação o jogador venceu o jogo, então uma tela de vitória é
mostrada e a conclusão da história.

3. Requisitos do Projeto
Alguns requisitos serão obrigatórios na implementação do projeto.
• O projeto deve ser desenvolvido na linguagem de programação C;
• Devem ser utilizadas structs para armazenar os membros (variáveis
internas da struct) do personagem, armas, armaduras e adversários;
• O jogo deve conter no mínimo seis adversários:
o Três para o primeiro combate, onde um será escolhido
aleatoriamente para participar da luta;
o Dois para o segundo combate, onde um será escolhido
aleatoriamente para participar da luta;
o Um para o último combate.
• O jogo deve possuir funções que tem como parâmetro de entrada
ponteiros.
O aluno tem a liberdade de acrescentar novas funcionalidades das
apresentadas (Sistema de magia por exemplo).*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct armas{
    int espada_curta;
	int rapieira;
	int lanca;
	int espada_longa;
	int tachi;
	int alfange;
	int glaive;
	int foice;
	int espada_deus;
} ARMAS;

typedef struct armaduras{
    int armadura_1;
    int armadura_2;
    int armadura_3;
    int armadura_4;
    int armadura_5;
    int armadura_6;
} ARMADURAS;

typedef struct personagem
{
	char nome[100];
	int hp;
	int forca;
	int constituicao;
	int destreza;
	int agilidade;
	int arma;
	int armadura;
	int dado;
}PERSONAGEM;

typedef struct goblin{
    int hp;
    int forca;
    int armadura;
    int agilidade;
} GOBLIN;

typedef struct esqueleto{
    int hp;
    int forca;
    int armadura;
    int agilidade;
} ESQUELETO;

typedef struct rato{
    int hp;
    int forca;
    int armadura;
    int agilidade;
} RATO;

void lore();
void criacao(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras);
void combate1(PERSONAGEM personagem);
void jogo();

void jogo(){
    PERSONAGEM personagem;
    ARMAS armas;
    ARMADURAS armaduras;
    criacao(&personagem, &armas, &armaduras);
    combate1(personagem);
}

void criacao(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras){
    int att;
    int sn;
    int contador = 0;
    int ea, em;
    int d1, d2, d3;
    time_t t;

    personagem -> forca = 0;
    personagem -> constituicao = 0;
    personagem -> destreza = 0;
    personagem -> agilidade = 0;

    system("cls");
    
    printf("Todo Heroi precisa de um nome:\n");
    fflush(stdin);
    gets(personagem -> nome);
    
    for(contador = 0; contador < 15; contador++){
        system("cls");
        printf("E de atributos...\n");
        printf("Escolha qual atributo vc deseja aumentar\n");
        printf("Pontos restantes: %d\n", 15 - contador);
        printf("1 - Forca\n");
        printf("2 - Constituicao\n");
        printf("3 - Destreza\n");
        printf("4 - Agilidade\n");
        scanf("%d", &att);

        switch(att){
            case 1:
            personagem -> forca += 1;
            break;

            case 2:
            personagem -> constituicao += 1;
            break;

            case 3:
            personagem -> destreza += 1;
            break;

            case 4:
            personagem -> agilidade += 1;
            break;

            default:
            contador -= 1;
            break;
        }
    }
    system("cls");

    armas -> espada_curta = 5;
    armas -> rapieira = 3;
    armas -> lanca = 3;
    armaduras -> armadura_1 = 1;
    armaduras -> armadura_2 = 2;
    armaduras -> armadura_3 = 3;

    srand(time(NULL));
    d1 = (rand()%6);
    d2 = (rand()%6);
    d3 = (rand()%6);
    personagem -> hp = d1 + d2 + d3 + 3 + personagem -> constituicao;

    printf("Seus dados de vida: %d %d %d\n", d1+1, d2+1, d3+1);
    printf("Nome: %s\n", personagem -> nome);
    printf("HP: %d\n", personagem -> hp);
    printf("FOR: %d\n", personagem -> forca);
    printf("CON: %d\n", personagem -> constituicao);
    printf("DES: %d\n", personagem -> destreza);
    printf("AGI: %d\n", personagem -> agilidade);
    printf("Este eh voce?\n");
    printf("1) Sim\n2) Nao\n");
    scanf("%d", &sn);

    switch(sn){
        case 1:
        printf("Escolha uma arma:\n");
        printf("1) Espada curta         2) Rapieira        3) Lanca\n");
        printf("   ATQ: 5                  ATQ: 3             ATQ: 3\n");
        printf("   Dado: 1d12              Dado: 2d6+1d4      Dado: 1d10+1d4\n");
        printf("   FOR: A                  FOR: -             FOR: C\n");
        printf("   DES: -                  DES: B            DES: C\n");
        scanf("%d", &ea);

        switch(ea)
    		{
    			case 1:
    				personagem->arma = armas->espada_curta+(personagem->forca+(personagem->forca/2));
    				personagem->dado = 1;
    				break;
    			case 2:
    				personagem->arma = armas->rapieira+personagem->destreza;
    				personagem->dado = 2;
    				break;
    			case 3:
    				personagem->arma = armas->lanca+(personagem->destreza/2)+(personagem->forca/2);
    				personagem->dado = 3;
    				break;
			}
			printf("Escolha uma armadura:\n");
			printf("1) Meia armadura     2) Armadura leve     3) Armadura completa\n");
			printf("   DEF: 1               DEF: 2               DEF: 3\n");
			printf("   AGL: +1              AGL: +0              AGL: -1\n");
			scanf("%d", &em);
			switch(em)
    		{
    			case 1:
    				personagem->armadura = armaduras->armadura_1+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade+=1;
    				break;
    			case 2:
    				personagem->armadura = armaduras->armadura_2+(personagem->constituicao+(personagem->constituicao/2));
    				break;
    			case 3:
    				personagem->armadura = armaduras->armadura_3+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade-=1;
    				break;
			}
    		printf("Muito bem entao\n");
    		printf("Se erga! E conquiste!\n");
    		system("pause");
    		break;
    	case 2:
    		printf("Entao se lembre de quem realmente e!");
    		system("pause");
    		personagem->forca=0;
    		personagem->constituicao=0;
    		personagem->destreza=0;
    		personagem->agilidade=0;
			criacao(personagem,armas, armaduras);
			break;
    }
}    

void combate1(PERSONAGEM personagem){
    GOBLIN goblin;
    goblin.hp = 10;
    goblin.armadura = 2;
    goblin.forca = 2;
    goblin.agilidade = 3;

    ESQUELETO esqueleto;
    esqueleto.hp = 15;
    esqueleto.armadura = 1;
    esqueleto.forca = 3;
    esqueleto.agilidade = 2;

    RATO rato;
    rato.hp = 11;
    rato.armadura = 2;
    rato.forca = 2;
    rato.agilidade = 4;

    int Jogador, IA, encontro;
    srand(time(NULL));
    encontro = rand()%3;

    int danoJogador, danoIA;
    int defesaJogador = 0, defesaIA = 0;
    int pocao = 0;
    int p1, p2, p3;

    system("cls");

    switch(encontro){
        case 0: // Goblin
        {
        printf("Um Goblin surge, sorrindo de forma psicotica!\n");
        system("pause");

        if(goblin.agilidade > personagem.agilidade){
            do{
                system("cls");
                printf("%s HP: %i\n\n", personagem.nome, personagem.hp);
                printf("Goblin HP: %i\n\n", goblin.hp);

                IA = rand()%3;

                // Goblin IA
                switch(IA){
                    case 0:
                    danoIA = rand()%8+1+goblin.forca;

                    printf("O Goblin ataca!\nVoce perde %i de HP\n", danoIA);
                    personagem.hp = personagem.hp - danoIA;
                    system("pause");
                    break;

                    case 1:
                    printf("O Goblin defende!\n");
                    goblin.armadura = goblin.armadura * 2;
                    defesaIA = 1;
                    system("pause");
                    break;

                    case 2:
                    printf("O Goblin usa uma pocao!\n");
                    goblin.hp = goblin.hp + rand()%6 + rand()%6 + rand()%6 + 3;
                    system("pause");
                    break;
                }

                // Tracker defesaJogador por turno
                if(defesaJogador == 1){
                    personagem.armadura = personagem.armadura / 2;
                    defesaJogador = 0;
                }

                printf("%s HP: %i\n", personagem.nome, personagem.hp);
                printf("Goblin HP: %i\n\n", goblin.hp);
                
                printf("Escolha a acao\n");
                printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
                scanf("%i", &Jogador);

                switch(Jogador){
                    case 1:
                    switch(personagem.dado){
                        case 1:
                        danoJogador = rand()%12 + 1;
                        break;

                        case 2:
                        danoJogador = rand()%6 + rand()%6 + rand()%4 + 3;
                        break;

                        case 3:
                        danoJogador = rand()%10 + rand()%4 + 2;
                        break;
                    }

                    danoJogador = danoJogador + personagem.arma;
                    printf("Voce ataca!\nCausando %i de dano\n", danoJogador);
                    goblin.hp = goblin.hp - danoJogador;
                    system("pause");
                    break;

                    case 2:
                    printf("Voce defende\n");
                    personagem.armadura = personagem.armadura * 2;
                    defesaJogador = 1;
                    system("pause");
                    break;

                    case 3:
                    if(pocao != 3){
                        p1 = rand()%6;
                        p2 = rand()%6;
                        p3 = rand()%6;
                        personagem.hp = personagem.hp + p1 + p2 + p3 + 3;
                        printf("Voce recuperou %i de HP\n", p1 + p2 + p3 + 3);
                        pocao++;
                        system("pause");
                    }
                    else{
                        printf("Pocoes esgotadas!\n");
                        system("pause");
                    }

                    default:
                    personagem.hp = personagem.hp + danoIA;
                    break;
                }

                // Tracker defesaIA(Goblin) por turno
                if(defesaIA == 1){
                    goblin.armadura = goblin.armadura / 2;
                    defesaIA = 0;
                }
            }
            while(goblin.hp > 1 && personagem.hp > 1);
        }
        else if(goblin.agilidade < personagem.agilidade){
            do{
                system("cls");

                printf("%s HP: %i\n\n", personagem.nome, personagem.hp);
                printf("Goblin HP: %i\n\n", goblin.hp);
                printf("Escolha a acao\n");
                printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
                scanf("%i", &Jogador);

                switch(Jogador){
                    case 1:
                    switch(personagem.dado){
                        case 1:
                        danoJogador = rand()%12 + 1;
                        break;

                        case 2:
                        danoJogador = rand()%6 + rand()%6 + rand()%4 + 3;
                        break;

                        case 3:
                        danoJogador = rand()%10 + rand()%4 + 2;
                        break;
                    }
                    danoJogador = danoJogador + personagem.arma;
                    printf("Voce ataca!\nCausando %i de dano\n", danoJogador);
                    goblin.hp = goblin.hp - danoJogador;
                    system("pause");
                    break;

                    case 2:
                    printf("Voce defende\n");
                    personagem.armadura = personagem.armadura * 2;
                    defesaJogador = 1;
                    system("pause");
                    break;

                    case 3:
                    if(pocao != 3){
                        p1 = rand()%6;
                        p2 = rand()%6;
                        p3 = rand()%6;
                        personagem.hp = personagem.hp + p1 + p2 + p3 + 3;
                        printf("Voce recuperou %i de HP\n", p1 + p2 + p3 + 3);
                        pocao++;
                        system("pause");
                    }
                    else{
                        printf("Pocoes esgotadas!\n");
                        system("pause");
                    }
                    break;

                    default:
                    personagem.hp = personagem.hp + danoIA;
                    break;
                }
                if(defesaIA == 1){
                    goblin.armadura = goblin.armadura / 2;
                    defesaIA = 0;
                }
                printf("%s HP: %i\n", personagem.nome, personagem.hp);
                printf("Goblin HP: %i\n\n", goblin.hp);
                
                IA = rand()%3;

                switch(IA){
                    case 0:
                    danoIA = rand()%8+1+goblin.forca;
                    printf("O Goblin ataca!\nVoce perde %i de HP\n", danoIA);
                    personagem.hp = personagem.hp - danoIA;
                    system("pause");
                    break;

                    case 1:
                    printf("O Goblin defende!\n");
                    goblin.armadura = goblin.armadura * 2;
                    defesaIA = 1;
                    system("pause");
                    break;

                    case 2:
                    printf("O Goblin usa uma pocao!\n");
                    goblin.hp = goblin.hp + rand()%6 + rand()%6 + rand()%6 + 3;
                    system("pause");
                    break;
                }
                if(defesaJogador == 1){
                    personagem.armadura = personagem.armadura / 2;
                    defesaJogador = 0;
                }
            }
            while(goblin.hp > 1 && personagem.hp > 1);
        }
        if(goblin.hp <= 1){
            printf("Voce venceu!\n");
            system("pause");
        }
        else if(personagem.hp <= 1){
            printf("Voce perdeu!\n");
            system("pause");
        }
        }
        break;

        // Esqueleto 
        case 1:
		{
			printf("Um esqueleto aparece, ansioso por uma luta!\n");
			system("pause");
		if(esqueleto.agilidade > personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				IA = rand()%3;
				switch(IA)
				{
					case 0:
						danoIA = rand()%8+1+esqueleto.forca;
						printf("O esqueleto ataca!\nVoce perde %i de HP\n", danoIA);
						personagem.hp=personagem.hp-danoIA;
						system("pause");
						break;
					case 1:
						printf("O esqueleto defende!\n");
						esqueleto.armadura=esqueleto.armadura*2;
						defesaIA=1;
						system("pause");
						break;
					case 2:
						printf("O esqueleto usa uma pocao!\n");
						esqueleto.hp=esqueleto.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaJogador == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaJogador = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &Jogador);
				switch(Jogador)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoJogador = rand()%12+1;
								break;
							case 2:
								danoJogador = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoJogador = rand()%10+rand()%4+2;
								break;
						}
						danoJogador = danoJogador+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoJogador);
						esqueleto.hp=esqueleto.hp-danoJogador;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaJogador=1;
						system("pause");
						break;
					case 3:
						if(pocao != 3)
						{
							p1=rand()%6;
							p2=rand()%6;
							p3=rand()%6;
							personagem.hp=personagem.hp+p1+p2+p3+3;
							printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
							pocao++;
							system("pause");
						}
						else
						{
							printf("Pocoes esgotadas!\n");
							system("pause");
						}
						break;
					default:
						personagem.hp=personagem.hp+danoIA;
						break;	
				}
				if(defesaIA == 1)
				{
					esqueleto.armadura=esqueleto.armadura/2;
					defesaIA = 0;
				}
			}while(esqueleto.hp > 1 && personagem.hp > 1);
		}
		else if(esqueleto.agilidade < personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &Jogador);
				switch(Jogador)
				{
					case 1:
						switch(personagem.dado)
						{
							case 1:
								danoJogador = rand()%12+1;
								break;
							case 2:
								danoJogador = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoJogador = rand()%10+rand()%4+2;
								break;
						}
						danoJogador = danoJogador+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoJogador);
						esqueleto.hp=esqueleto.hp-danoJogador;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaJogador=1;
						system("pause");
						break;
					case 3:
						if(pocao != 3)
						{
							p1=rand()%6;
							p2=rand()%6;
							p3=rand()%6;
							personagem.hp=personagem.hp+p1+p2+p3+3;
							printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
							pocao++;
							system("pause");
						}
						else
						{
							printf("Pocoes esgotadas!\n");
							system("pause");
						}
						break;
					default:
						personagem.hp=personagem.hp+danoIA;
						break;	
				}
				if(defesaIA == 1)
				{
					esqueleto.armadura=esqueleto.armadura/2;
					defesaIA = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				IA = rand()%3;
				switch(IA)
				{
					case 0:
						danoIA = rand()%8+1+goblin.forca;
						printf("O esqueleto ataca!\nVoce perde %i de HP\n", danoIA);
						personagem.hp=personagem.hp-danoIA;
						system("pause");
						break;
					case 1:
						printf("O esqueleto defende!\n");
						esqueleto.armadura=esqueleto.armadura*2;
						defesaIA=1;
						system("pause");
						break;
					case 2:
						printf("O esqueleto usa uma pocao!\n");
						esqueleto.hp=esqueleto.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaJogador == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaJogador = 0;
				}
			}while(esqueleto.hp > 1 && personagem.hp > 1);
		}
		if(esqueleto.hp < 1)
		{
			printf("vitoria\n");
			system("pause");
		}
		else if(personagem.hp<1)
		{
			printf("derrota\n");
			system("pause");
		}
		}
		break;
		//Rato gigante
		case 2:
		{
			printf("Um rato gigante aparece, ele parece estar mais assustado do que voce!\n");
			system("pause");
		if(rato.agilidade > personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				IA = rand()%3;
				switch(IA)
				{
					case 0:
						danoIA = rand()%8+1+esqueleto.forca;
						printf("O rato ataca!\nVoce perde %i de HP\n", danoIA);
						personagem.hp=personagem.hp-danoIA;
						system("pause");
						break;
					case 1:
						printf("O rato defende!\n");
						rato.armadura=rato.armadura*2;
						defesaIA=1;
						system("pause");
						break;
					case 2:
						printf("O rato usa uma pocao!\n");
						rato.hp=rato.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaJogador == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaJogador = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &Jogador);
				switch(Jogador)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoJogador = rand()%12+1;
								break;
							case 2:
								danoJogador = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoJogador = rand()%10+rand()%4+2;
								break;
						}
						danoJogador = danoJogador+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoJogador);
						rato.hp=rato.hp-danoJogador;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaJogador=1;
						system("pause");
						break;
					case 3:
						if(pocao != 3)
						{
							p1=rand()%6;
							p2=rand()%6;
							p3=rand()%6;
							personagem.hp=personagem.hp+p1+p2+p3+3;
							printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
							pocao++;
							system("pause");
						}
						else
						{
							printf("Pocoes esgotadas!\n");
							system("pause");
						}
						break;
					default:
						personagem.hp=personagem.hp+danoIA;
						break;	
				}
				if(defesaIA == 1)
				{
					rato.armadura=rato.armadura/2;
					defesaIA = 0;
				}
			}while(rato.hp > 1 && personagem.hp > 1);
		}
		else if(rato.agilidade < personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &Jogador);
				switch(Jogador)
				{
					case 1:
						switch(personagem.dado)
						{
							case 1:
								danoJogador = rand()%12+1;
								break;
							case 2:
								danoJogador = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoJogador = rand()%10+rand()%4+2;
								break;
						}
						danoJogador = danoJogador+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoJogador);
						rato.hp=rato.hp-danoJogador;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaJogador=1;
						system("pause");
						break;
					case 3:
						if(pocao != 3)
						{
							p1=rand()%6;
							p2=rand()%6;
							p3=rand()%6;
							personagem.hp=personagem.hp+p1+p2+p3+3;
							printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
							pocao++;
							system("pause");
						}
						else
						{
							printf("Pocoes esgotadas!\n");
							system("pause");
						}
						break;
					default:
						personagem.hp=personagem.hp+danoIA;
						break;	
				}
				if(defesaIA == 1)
				{
					rato.armadura=rato.armadura/2;
					defesaIA = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				IA = rand()%3;
				switch(IA)
				{
					case 0:
						danoIA = rand()%8+1+rato.forca;
						printf("O rato ataca!\nVoce perde %i de HP\n", danoIA);
						personagem.hp=personagem.hp-danoIA;
						system("pause");
						break;
					case 1:
						printf("O rato defende!\n");
						rato.armadura=rato.armadura*2;
						defesaIA=1;
						system("pause");
						break;
					case 2:
						printf("O rato usa uma pocao!\n");
						rato.hp=rato.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaJogador == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaJogador = 0;
				}
			}while(rato.hp > 1 && personagem.hp > 1);
		}
		if(rato.hp < 1)
		{
			printf("vitoria\n");
			system("pause");
		}
		else if(personagem.hp<1)
		{
			printf("derrota\n");
			system("pause");
		}
		}
		break;
    }
}

void premiacao1(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras){
    int contador = 0;
    int att, sn, ea, em;

    printf("Voce subiu para o nivel 2!");
    system("pause");
    for(contador = 0; contador < 10; contador++){
        printf("Escolha qual atributo vc deseja aumentar\n");
        printf("Pontos restantes: %d\n", 15 - contador);
        printf("1 - Forca\n");
        printf("2 - Constituicao\n");
        printf("3 - Destreza\n");
        printf("4 - Agilidade\n");
        scanf("%d", &att);

        switch(att){
            case 1:
            personagem -> forca += 1;
            break;

            case 2:
            personagem -> constituicao += 1;
            break;

            case 3:
            personagem -> destreza += 1;
            break;

            case 4:
            personagem -> agilidade += 1;
            break;

            default:
            contador -= 1;
            break;
        }
    }
    
    system("cls");

    armas -> foice = 6;
    armas -> glaive = 4;
    armas -> alfange =  5;
    armaduras -> armadura_4 = 2;
    armaduras -> armadura_5 = 4;
    armaduras -> armadura_6 = 6;

    switch(sn){
        case 1:
        printf("Escolha uma arma:\n");
        printf("1) Foice                   2) Glaive          3) Alfange\n");
        printf("   ATQ: 6                  ATQ: 4                ATQ: 5\n");
        printf("   Dado: 1d12              Dado: 2d6+1d4         Dado: 1d10+1d4\n");
        printf("   FOR: A                  FOR: -                FOR: C\n");
        printf("   DES: -                  DES: B                DES: C\n");
        scanf("%d", &ea);

        switch(ea)
    		{
    			case 1:
    				personagem->arma = armas->foice+(personagem->forca+(personagem->forca/2));
    				personagem->dado = 1;
    				break;
    			case 2:
    				personagem->arma = armas->glaive+personagem->destreza;
    				personagem->dado = 2;
    				break;
    			case 3:
    				personagem->arma = armas->alfange+(personagem->destreza/2)+(personagem->forca/2);
    				personagem->dado = 3;
    				break;
			}
			printf("Escolha uma armadura:\n");
			printf("1) Meia armadura     2) Armadura leve     3) Armadura completa\n");
			printf("   DEF: 1               DEF: 2               DEF: 3\n");
			printf("   AGL: +1              AGL: +0              AGL: -1\n");
			scanf("%d", &em);
			switch(em)
    		{
    			case 1:
    				personagem->armadura = armaduras->armadura_1+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade+=1;
    				break;
    			case 2:
    				personagem->armadura = armaduras->armadura_2+(personagem->constituicao+(personagem->constituicao/2));
    				break;
    			case 3:
    				personagem->armadura = armaduras->armadura_3+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade-=1;
    				break;
			}
    }
}

void main(){
    int menu;
    
    system("Title RPG");
    system("color fd");
    system("cls");
    
    printf("Jogo\n");
    printf("1) Jogar\n");
    printf("2) Lore\n");
    printf("3) Sair\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
        jogo();
        break;
        
        case 2:
        printf("Lore\nbottom text\n");
        system("pause");
        main();
        break;

        case 3:
        printf("Ate que nossos caminhos se cruzem novamente");
        break;

        default:
        main();
        break;
    }
}

