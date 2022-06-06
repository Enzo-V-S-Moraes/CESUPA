/*Desenvolva um código para auxiliar em um supermercado local da cidade de Belém. O algoritmo deve conseguir armazenar o nome, preço e data de validade de 15 produtos.
O código possui o seguinte menu:

##############
Supermercado Céu Azul
1- Cadastrar
2- Calcular média
3- Gerar lista
4- Verificar validade
5- Sair
##############

A ação  que o código deve fazer de cada opção está abaixo:
1- Adicionar o nome, preço e data de validade de um produto.
2- Calcular a média de todos os produtos cadastrados.
3- Escrever na tela as informações de todos os produtos cadastrados.
4- Escrever na tela o nome dos produtos que passaram da validade dado uma data inserida.
5- Escrever na tela desligando sistema e parar a execução do algoritmo.
* Se for digitado qualquer outro valor o código deverá escrever a mensagem opção inválida.

O produto deve ser uma struct produto que contem o nome, preço e data de validade, e as variáveis criadas com o tipo da struct não podem ser globais.
Cada uma das opções deve ser uma função que faz as ações especificadas no texto acima.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct produto
{
    char nome[50];
    float preco;
    int dia, mes, ano;
} PRODUTO;

void Inicializar(PRODUTO *produto);
void Cadastrar(PRODUTO *produto);
void Media(PRODUTO *produto);
void Informacao(PRODUTO produto);
void Lista(PRODUTO *produto);
void Validade(PRODUTO *produto);
void Finalizar();
void Invalido();

int main(){
	PRODUTO produtos[15];
	
    int escolha;

    Inicializar(produtos);

    do{
        system("cls");

        printf("##############\n");
        printf("Supermercado Ceu Azul\n");
        printf("1- Cadastrar\n");
        printf("2- Calcular Media\n");
        printf("3- Gerar Lista\n");
        printf("4- Verificar Validade\n");
        printf("5- Sair\n");
        printf("##############\n");
        printf("Digite uma opcao: "); scanf("%d", &escolha);

        if(escolha == 1){
            Cadastrar(produtos);
        }
        else if(escolha == 2){
            Media(produtos);
        }
        else if(escolha == 3){
            Lista(produtos);
        }
        else if(escolha == 4){
            Validade(produtos);
        }
        else if(escolha == 5){
            Finalizar();
        }
        else{
            Invalido();
        }
    }
    
	while(escolha != 5);

    return 0;
}

void Inicializar(PRODUTO *produto){
    int i;

    for(i = 0; i < 15; i++){
        strcpy(produto[i].nome, " ");
        produto[i].preco = 0;
        produto[i].dia = 0;
        produto[i].mes = 0;
        produto[i].ano = 0;
    }
}

void Media(PRODUTO *produto){
    int i;
    int cont = 0;
    float media = 0;

    system("cls");

    printf("##### MEDIA #####\n");
    for(i = 0; i < 15; i++){
        if(strcmp(produto[i].nome, " ") != 0){
            media += produto[i].preco;
            cont++;
        }
        else{
            break;
        }
    }
    printf("\tMedia dos %d produtos: R$%.2f\n", cont, media/cont);

    system("pause");
}

void Cadastrar(PRODUTO *produto){
    int i;

    system("cls");

    printf("##### CADASTRANDO #####\n");
    for(i = 0; i < 15; i++){
        if(strcmp(produto[i].nome, " ") == 0){
            printf("\tProduto ID: %d\n", i+1); fflush(stdin);
            printf("\tDigite o nome do produto: "); gets(produto[i].nome);
            printf("Digite o preco do produto: "); scanf("%f", &produto[i].preco);
            printf("Digite o dia de validade: "); scanf("%d", &produto[i].dia);
            printf("Digite o mes de validade: "); scanf("%d", &produto[i].mes);
            printf("Digite o ano de validade: "); scanf("%d", &produto[i].ano);
            break;
        }
    }

    printf("Produto ID %d Cadastrado com sucesso!\n", i+1);
    
    system("pause");
}

void Informacao(PRODUTO produto){
    system("cls");

    printf("\tNome: %s\n", produto.nome);
    printf("\tPreco: R$%.2f\n", produto.preco);
    printf("\tValidade: %d/%d/%d\n", produto.dia, produto.mes, produto.ano);
    printf("##############################\n\n");
}

void Lista(PRODUTO *produto){
    int i;

    system("cls");

    printf("##### LISTA DE PRODUTOS #####\n");
    for(i = 0; i < 15; i++){
        if(strcmp(produto[i].nome, " ") != 0){
            printf("\tProduto ID: %d\n", i+1);
            Informacao(produto[i]);
        }
    }

    system("pause");

}

void Validade(PRODUTO *produto){
    int i;
    int dia, mes, ano;

    system("cls");

    printf("##### VALIDADE #####\n");
    printf("\tDigite o dia de validade: "); scanf("%d", &dia);
    printf("\tDigite o mes de validade: "); scanf("%d", &mes);
    printf("\tDigite o ano de validade: "); scanf("%d", &ano);

    for(i = 0; i < 15; i++){
        if(strcmp(produto[i].nome, " ") != 0){
            if(produto[i].ano < ano){
                printf("\tProduto ID: %d\n", i+1);
                Informacao(produto[i]);
            }
            else if(produto[i].mes < mes && produto[i].ano == ano){
                printf("\tProduto ID: %d\n", i+1);
                Informacao(produto[i]);
            }
            else if(produto[i].dia < dia && produto[i].mes == mes && produto[i].ano == ano){
                printf("\tProduto ID: %d\n", i+1);
                Informacao(produto[i]);
            }
        }
    }

    system("pause");

}

void Finalizar(){
    system("cls");
    printf("##### FINALIZANDO SOFTWARE #####\n");
}

void Invalido(){
    printf("##### INVALIDO #####\n");

    system("pause");
}