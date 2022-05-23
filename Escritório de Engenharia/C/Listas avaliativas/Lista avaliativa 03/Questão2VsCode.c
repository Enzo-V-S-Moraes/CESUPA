#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Conta{
    int numero;
    float saldo;
} Conta;

Conta conta[100];

int contador = 1001;

void O(){
    printf("Informe o depósito inicial: ");
    scanf("%f", &conta[contador].saldo);

    conta[contador].numero = contador;

    printf("O numero da sua conta é %d\n\n", conta[contador].numero);
    
    contador++;
}

void B(){
    int a;

    printf("Informe o numero da conta: ");
    scanf("%d", a);

    if(a != conta[contador].numero){
        printf("Conta não encontrada");
    }
    else{
        printf("Seu saldo atual: %.2f", conta[contador].saldo);
    }
}

void D(){
    int a;

    printf("Informe o numero da conta: ");
    scanf("%d", &a);

    if(a != conta[contador].numero){
        printf("Conta não encontrada");
    }
    else{
        float deposito;

        printf("Informe o depósito: ");
        scanf("%f", &deposito);

        conta[contador].saldo = deposito + conta[contador].saldo;

        printf("Seu novo saldo: %.2f", conta[contador].saldo);
    }
}

void W(){
    float saque = 0.00;

    printf("\nEntre com o valor para saque: ");
    scanf("%f", &saque);
    
    conta[contador].saldo = conta[contador].saldo - saque;
    saque = 0.00;

    printf("Seu novo saldo: %f", conta[contador].saldo);
}

void C(){
    int a;

    printf("Informe o numero da conta: ");
    scanf("%d", &a);

    if(a != conta[contador].numero){
        printf("Conta não registrada");
    }
    else{
        conta[contador].saldo = 0;

        printf("A conta foi fechada");
    }
}

void P(){
    int i;

    for(i = 1000; i < contador; i++){
        printf("%d", conta[contador].numero);
    }
}

int main(){
    char escolha;

    setlocale(LC_ALL, "Portuguese");

    for(;;){
        printf("Informe o tipo de transação desejada:\n");
	    printf("O- Abrir conta\t");
	    printf("B- Consultar saldo\t\n");
	    printf("D- Deposito\t");
	    printf("W- Saque\t\n");
	    printf("C- Fechar conta\t");
	    printf("P- Listar contas\t\n");
	    printf("E- Fechar todas as contas e sair do programa\n");
	    printf("ESCOLHA :");
	    scanf("%s", &escolha);

        if(escolha == 'e' || escolha == 'E'){
            break;
        }
        else{
            switch(escolha){
                case 'o':
                case 'O':
                    O();
                    break;

                case 'b':
                case 'B':
                    B();
                    break;

                case 'd':
                case 'D':
                    D();
                    break;

                case 'w':
                case 'W':
                    W();
                    break;

                case 'c':
                case 'C':
                    C();
                    break;

                case 'p':
                case 'P':
                    P();
                    break;

                default:
                printf("Inválido");
                break;
            }
        }
    }
}