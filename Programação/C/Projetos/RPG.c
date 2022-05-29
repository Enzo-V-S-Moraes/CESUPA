#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct armas
{
	int espada_curta;
	int rapieira;
	int lanca;
	int espada_longa;
	int tachi;
	int alfange;
	int glaive;
	int foice;
	int espada_deus;
}ARMAS;

typedef struct armaduras
{
	int armadura_1;
	int armadura_2;
	int armadura_3;
}ARMADURAS;

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

typedef struct goblin
{
	int hp;
	int forca;
	int armadura;
	int agilidade;
}GOBLIN;

typedef struct esqueleto
{
	int hp;
	int forca;
	int armadura;
	int agilidade;
}ESQUELETO;

typedef struct rato
{
	int hp;
	int forca;
	int armadura;
	int agilidade;
}RATO;

void lore();
void criacao(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras);
void combate1(PERSONAGEM personagem);
void jogo();

void main()
{
	int menu;
	system("Title RPG");
	system("color fd");
	system("cls");
	printf("Jogo\n");
	printf("1) jogar o jogo\n");
	printf("2) lore\n");
	printf("3) sair\n");
	scanf("%d", &menu);
	switch(menu)
	{
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

void jogo()
{
	PERSONAGEM personagem;
	ARMAS armas;
	ARMADURAS armaduras;
	criacao(&personagem, &armas, &armaduras);
	combate1(personagem);
}

void combate1(PERSONAGEM personagem)
{
	//Definindo os stats dos possiveis monstros do primeiro encontro
	GOBLIN goblin;
	goblin.forca=2;
	goblin.hp=10;
	goblin.armadura=2;
	goblin.agilidade=3;
	
	ESQUELETO esqueleto;
	esqueleto.forca=3;
	esqueleto.hp=15;
	esqueleto.armadura=1;
	esqueleto.agilidade=2;
	
	RATO rato;
	rato.forca=2;
	rato.hp=11;
	rato.armadura=2;
	rato.agilidade=4;
	
	int i, ai, encontro;
	int defesaj = 0, defesai = 0;
	int pocao = 0;
	int p1,p2,p3;
	int danoj, danoi;
	srand(time(NULL));
	encontro = rand()%3;
	system("cls");
	switch(encontro)
	{
		//Goblin
		case 0:
		{
			printf("Um goblin surge, sedento por uma batalha!\n");
			system("pause");
		if(goblin.agilidade > personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				ai = rand()%3;
				switch(ai)//Acao do goblin decidida aleatoriamente
				{
					case 0:
						danoi = rand()%8+1+goblin.forca;
						printf("O goblin ataca!\nVoce perde %i de HP\n", danoi);
						personagem.hp=personagem.hp-danoi;
						system("pause");
						break;
					case 1:
						printf("O goblin defende!\n");
						goblin.armadura=goblin.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						printf("O goblin usa uma pocao!\n");
						goblin.hp=goblin.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaj == 1)//Tracker de defesa do jogador por turno
				{
					personagem.armadura=personagem.armadura/2;
					defesaj = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoj);
						goblin.hp=goblin.hp-danoj;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaj=1;
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
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)//Tracker de defesa do goblin por turno
				{
					goblin.armadura=goblin.armadura/2;
					defesai = 0;
				}
			}while(goblin.hp > 1 && personagem.hp > 1);
		}
		else if(goblin.agilidade < personagem.agilidade)//Mesma logica de round, so que com personagens trocados
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoj);
						goblin.hp=goblin.hp-danoj;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaj=1;
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
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					goblin.armadura=goblin.armadura/2;
					defesai = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+goblin.forca;
						printf("O goblin ataca!\nVoce perde %i de HP\n", danoi);
						personagem.hp=personagem.hp-danoi;
						system("pause");
						break;
					case 1:
						printf("O goblin defende!\n");
						goblin.armadura=goblin.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						printf("O goblin usa uma pocao!\n");
						goblin.hp=goblin.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaj = 0;
				}
			}while(goblin.hp > 1 && personagem.hp > 1);
		}
		if(goblin.hp < 1)
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
		//Esqueleto
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
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+esqueleto.forca;
						printf("O esqueleto ataca!\nVoce perde %i de HP\n", danoi);
						personagem.hp=personagem.hp-danoi;
						system("pause");
						break;
					case 1:
						printf("O esqueleto defende!\n");
						esqueleto.armadura=esqueleto.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						printf("O esqueleto usa uma pocao!\n");
						esqueleto.hp=esqueleto.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaj = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoj);
						esqueleto.hp=esqueleto.hp-danoj;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaj=1;
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
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					esqueleto.armadura=esqueleto.armadura/2;
					defesai = 0;
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
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoj);
						esqueleto.hp=esqueleto.hp-danoj;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaj=1;
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
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					esqueleto.armadura=esqueleto.armadura/2;
					defesai = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+goblin.forca;
						printf("O esqueleto ataca!\nVoce perde %i de HP\n", danoi);
						personagem.hp=personagem.hp-danoi;
						system("pause");
						break;
					case 1:
						printf("O esqueleto defende!\n");
						esqueleto.armadura=esqueleto.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						printf("O esqueleto usa uma pocao!\n");
						esqueleto.hp=esqueleto.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaj = 0;
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
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+esqueleto.forca;
						printf("O rato ataca!\nVoce perde %i de HP\n", danoi);
						personagem.hp=personagem.hp-danoi;
						system("pause");
						break;
					case 1:
						printf("O rato defende!\n");
						rato.armadura=rato.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						printf("O rato usa uma pocao!\n");
						rato.hp=rato.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaj = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoj);
						rato.hp=rato.hp-danoj;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaj=1;
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
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					rato.armadura=rato.armadura/2;
					defesai = 0;
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
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma;
						printf("Voce ataca!\nCausando %i de dano\n", danoj);
						rato.hp=rato.hp-danoj;
						system("pause");
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura=personagem.armadura*2;
						defesaj=1;
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
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					rato.armadura=rato.armadura/2;
					defesai = 0;
				}
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+rato.forca;
						printf("O rato ataca!\nVoce perde %i de HP\n", danoi);
						personagem.hp=personagem.hp-danoi;
						system("pause");
						break;
					case 1:
						printf("O rato defende!\n");
						rato.armadura=rato.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						printf("O rato usa uma pocao!\n");
						rato.hp=rato.hp+rand()%6+rand()%6+rand()%6+3;
						system("pause");
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura=personagem.armadura/2;
					defesaj = 0;
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

void criacao(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras)
{
    int att;
    int sn;
    int contador = 0;
    int ea, em;
    int d1, d2, d3;
    time_t t;

	//Zerando os stats do personagem para nao serem usados outros numeros que poderiam estar na memoria
	personagem->forca=0;
    personagem->constituicao=0;
    personagem->destreza=0;
    personagem->agilidade=0;
    
    system("cls");
	printf("Todo heroi precisa de um nome:\n");
	fflush(stdin);
	gets(personagem->nome);
    for(contador = 0; contador < 15; contador ++)
    {
    system("cls");
	printf("E de atributos...\n");
    printf("Escolha qual atributo vc deseja aumentar\n");
    printf("Pontos restantes: %d\n", 15-contador);
    printf("1) forca %d\n", personagem->forca);
    printf("2) constituicao %d\n", personagem->constituicao);
    printf("3) destreza %d\n", personagem->destreza);
    printf("4) agilidade %d\n", personagem->agilidade);
    scanf("%d", &att);
    switch(att)
    {
    case 1:
        personagem->forca += 1;
        break;
    case 2:
        personagem->constituicao += 1;
        break;
    case 3:
        personagem->destreza += 1;
        break;
	case 4:
		personagem->agilidade += 1;
    	break;
    default:
        contador-=1;
        break;
    }
    }
    system("cls");
    
    //Definindo as constantes das armas e armaduras iniciais
    armas->espada_curta = 5;
    armas->rapieira = 3;
    armas->lanca = 3;
    armaduras->armadura_1 = 1;
	armaduras->armadura_2 = 2;
	armaduras->armadura_3 = 3;
    
    //Definindo os dados de vida
    srand(time(NULL));
    d1 = (rand()%6);
    d2 = (rand()%6);
    d3 = (rand()%6);
	personagem->hp=d1+d2+d3+3+personagem->constituicao;
	
	printf("Seus dados de vida: %d  %d  %d\n", d1+1,d2+1,d3+1);
    printf("Nome: %s\n", personagem->nome);
    printf("HP: %d\n", personagem->hp);
    printf("FOR: %d\n", personagem->forca);
    printf("CON: %d\n", personagem->constituicao);
    printf("DES: %d\n", personagem->destreza);
    printf("AGL: %d\n", personagem->agilidade);
    printf("Este e voce?\n");
    printf("1) Sim\t2) Nao\n");
    scanf("%d", &sn);
    switch(sn)
    {
    	case 1:
    		printf("Escolha uma arma:\n");
    		printf("1) Espada curta        2) Rapieira        3) Lanca\n");
    		printf("   ATQ: 5                 ATQ: 3             ATQ: 3\n");
    		printf("   Dado: 1d12             Dado: 2d6+1d4      Dado: 1d10+1d4\n");
    		printf("   FOR: A                 FOR: -             FOR: C\n");
    		printf("   DES: -                 DES: B             DES: C\n");
    		//A: x1,5, B x1, C x0,5
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