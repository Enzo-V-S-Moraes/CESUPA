#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Creation{
    char name[50];
    int HP;
    int ARMOR;
    int STR;
    int CON;
    int AGI;
    int DEX;
} Creation;

Creation creation;

int counter = 0;

int main(){

    printf("Welcome to char creation!\n");

    if(counter < 1){
        printf("Pls, say your character's name: ");
        scanf("%s", creation[counter].name);
        
        counter++;
    }

    return 0;
}
