#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lin;
int col;

void inicializarMatriz(char* matriz);
void printarMatriz(char* matriz);
void sementeU(char* matriz, int interacao);
void sementeY(char* matriz, int interacoes);
void fractal(char* matriz, int* interacao);


int main(){
    int interacoes;

    printf("Escolha o numero de interacoes: ");
    scanf("%d", &interacoes);
    fflush(stdin);

    lin = pow(2, interacoes+1)+1; //+1?
    col = pow(2, interacoes+1)+1; //+1?

    char* matriz = malloc(lin*col*sizeof(char));

    inicializarMatriz(matriz);

    fractal(matriz, &interacoes);    

    printarMatriz(matriz);
    
    system("PAUSE");
    free(matriz);
    return 0;
}


void inicializarMatriz(char* matriz)
{
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            matriz[i*lin + j] = ' ';
        }
    }
	
    matriz[(lin-1)*lin + (((col+1)/2)-1)] = 'U';
}


void printarMatriz(char* matriz)
{
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%c", matriz[i*lin + j]);
        }
        printf("\n");
    }
}


void sementeU(char* matriz, int interacao)
{
    int i, j, k;

    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(matriz[i*lin + j] == 'U')
            {
                for(k = 0; k < pow(2, interacao - 1) ; k++)
                {
                    matriz[(i-k)*lin + j] = '1';
                }
                matriz[(i-k)*lin + j] = 'Y';
            }
        }
    }
}


void sementeY(char* matriz, int interacao)
{
    int i, j, k;

    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(matriz[i*lin + j] == 'Y')
            {
                for(k = 0; k < pow(2, interacao - 1) ; k++)
                {
                    matriz[(i-k)*lin + j-k] = '1';
                    matriz[(i-k)*lin + j+k] = '1';
                }
                matriz[(i-k)*lin + j-k] = 'U';
                matriz[(i-k)*lin + j+k] = 'U';
            }
        }
    }
}


void fractal(char* matriz, int* interacao)
{   
    if(*interacao >= 0)
    {   
        sementeU(matriz, *interacao);
        sementeY(matriz, *interacao);
        *interacao = *interacao - 1;
        fractal(matriz, interacao);
    }
}