#include <stdio.h>
#include <string.h>
#include <locale.h>

//Criar uma função que receba uma mensagem, seu tamanho e um caractere e retire todas as 
//ocorrências desse caractere na mensagem, colocando * em seu lugar.
//A função deve retorna o total de caracteres retirados.

void filtragem(char palavra_frase[100],int tamanho, char letra){
    char sentenca[100];
    int i, j = 0;

    strcpy(sentenca, palavra_frase);

    for(i = 0; i < tamanho; i++){
        if(sentenca[i] == letra){
            j++;
            sentenca[i] = '*';
        }
    }

    printf("\nPalavra/frase modificada: \n %s", sentenca);
    printf("\nCaracteres retirados: %d", j);
}

void programa(){
    char palavra_frase[100];
    char letra;

    printf("Olá, me chamo touchtouch e estou aqui para te ajudar a remover letras indesejadas.\n");
    printf("Vamos começar? Primeiro digite sua frase:\n");
    gets(palavra_frase);
    printf("Agora me diga qual letra você deseja remover: ");
    scanf("%c", &letra);

    filtragem(palavra_frase, strlen(palavra_frase), letra);
}

int menu(){
    int escolha;

    setlocale(LC_ALL, "Portuguese");

    while(escolha < 1){
        printf("********************/n*          MENU         */n********************");
        printf("1- Iniciar programa");
        printf("2- Sair");
        printf("ESCOLHA: ");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                programa();
                break;
            
            default:
                printf("Processo inválido");
                break;
        }
    }
}
