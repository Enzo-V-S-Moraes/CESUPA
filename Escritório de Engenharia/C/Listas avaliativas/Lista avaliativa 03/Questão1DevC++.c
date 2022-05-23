#include <stdio.h>
#include <string.h>
#include <locale.h>

/* 
    Criar um algoritmo que funciona de acordo com o menu a seguir, 
    sabendo-se que poder�o ser cadastrado at� 10 clientes, 
    onde o dado necess�rio para o cadastro � o nome e a milhagem.

    ********************
    *       MENU       *
    ********************
    1- Cadastrar dados do cliente.
    2- Listar milhagem do cliente.
    3- Imprimir os nomes que t�m maior e menor milhagem.
    4- Imprimir os nomes e as milhagens de todos os clientes cadastrados.
    5- Sair.
    ESCOLHA:  
*/

typedef struct Cliente{
    char nome[50];
    float milhagem;
} Cliente;

Cliente cliente[10];

int contador = 0;

void SemRegistro(){
    if(contador == 0){
    	system("cls");
        printf("Nãoo existem registros de clientes.\n");
        return;
    }
}

void CadastroCliente() {
    printf("Informe seu nome: ");
    scanf("%s", cliente[contador].nome);
    printf("Informe sua milhagem: ");
    scanf("%f", &cliente[contador].milhagem);
    
    system("cls");

    contador++;
}

void ListarMilhagem(){
    SemRegistro();

    char nome[50];
    
    printf("Informe seu nome: ");
    scanf("%s", nome);

    int i;
    for(i = 0; i < contador; i++) {
        if(strcmp(cliente[i].nome, nome) == 0) {
            printf("Milhagem: %f", cliente[i].milhagem);
            return;
        }
    }
}

void ImprimirMaiorMenor() {
    SemRegistro();
    
    float milhagem = cliente[0].milhagem;
	
	int i;
    for(i = 1; i < contador; i++){
        if(cliente[i].milhagem > milhagem){    
            milhagem = cliente[i].milhagem; //200
            printf("Nome: %s\n", cliente[i].nome);
            printf("O maior valor �: %f\n", cliente[i].milhagem);
            
            for(i = 1; i < contador; i++){
    			if(cliente[i].milhagem < milhagem){
    				milhagem = cliente[i].milhagem;
    				printf("Nome: %s\n", cliente[i].nome);
    				printf("O menor valor �: %f\n", cliente[i].milhagem);
		}
	}
        }
    }
}

void MostrarTodos() {
    SemRegistro();
    
    int i;
    for(i = 0; i < contador; i++){
        printf("\nNome: %s\n", cliente[i].nome);
        printf("Milhagem: %f\n\n", cliente[i].milhagem);
    }
}

void menu() {
	int escolha;
	
	setlocale(LC_ALL, "Portuguese");
	
    printf("\n********************\n*       MENU       *\n********************\n");
    printf("1- Cadastrar dados do cliente.\n");
    printf("2- Listar milhagem do cliente.\n");
    printf("3- Imprimir os nomes que t�m maior e menor milhagem.\n");
    printf("4- Imprimir os nomes e as milhagens de todos os clientes cadastrados.\n");
    printf("5- Sair.\n");
    printf("ESCOLHA: ");
}

int main(){
    int escolha;
    
    while(escolha != 5) {
        menu();
        scanf("%d", &escolha);
        switch(escolha){
            case 1: 
                CadastroCliente();
                break;
        
            case 2:
                ListarMilhagem();
                break;
 
            case 3:
                ImprimirMaiorMenor();
                break;

            case 4:
                MostrarTodos();
                break;
                
            case 5:
                printf("Tchau");
                break;
                
            default:
                printf("Inv�lido");
                break;
        }
    }
}
