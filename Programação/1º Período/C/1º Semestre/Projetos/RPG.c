#include <stdio.h>
#include <stdlib.h>

typedef struct Personagens{
    char snome_personagens[16];
    int ipv;
    int iforca;
    int iarmadura;
    int iagilidade;
    int ixp;
    int inivel;
};

int main(int argo, char *argv[]){
    struct Personagens personagens[1];
    int i = 0;
    int iletras;

    for(i = 0; i < 3; i++){
        personagens[i].ipv = 20;
        personagens[i].iforca = 5;
        personagens[i].iarmadura = 5;
        personagens[i].ixp = 3;
        personagens[i].ixp = 0;
        personagens[i].inivel = 1;
    }

    do{
        iletras = 0;
        
        gets(personagens[0].snome_personagem, iletras);
        printf("%i");
    }

    printf("\n%s - %i letras\n", personagens[0].snome_personagem, strlen(personagens[0].snome_personagem));

    system("PAUSE");
    return 0;
}
