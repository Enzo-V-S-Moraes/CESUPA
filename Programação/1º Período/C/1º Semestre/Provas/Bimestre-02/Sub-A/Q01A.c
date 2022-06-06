/*Desenvolva um código que possua uma função chamado multiplo(int num), 
essa função imprime os múltiplos de 7 e 2, ao mesmo tempo, no intervalor de 1 a num*/

#include <stdio.h>

void multiplo(int num) {

}

int main(){
    int num;

    printf("Informe um numero inteiro:\n");
    scanf("%i", &num);

    multiplo(num);

    return 0;
}

void Multiplo(int num){
    int i;

    for(i = 1; i <= num; i++){
        if(i%2 == 0 && i%7 == 0){
            printf("\n %d -numero multiplo de 2 e 7!", i);
        }
    }
}