/*Desenvolva um código que gere uma matriz 10x10 de forma automática e que imprima os elementos abaixo da diagonal principal.

Para esse código não utilize laços de seleção (if-else-switch).*/

#include <stdio.h>

int main(){
    int mat[10][10];
    int i, j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            mat[i][j] = i * 10 + j;
            printf("%d ", mat[i][j]);
        }
        
        printf("\n");

    }

printf("\n\n");

for(i = 0; i < 10; i++){
    for(j = 0; j < i; j++){
        if(i > j){
            printf("%d ", mat[i][j]);
        }
    }
    printf("\n");
}

return 0;

}