#include<stdio.h>
#include"puissance4.c"
#include"morpion.c"
/* Inclut le .c de ton jeu au dessus*/

int main(){
    int choix;
/* Rajoute ton jeu au print*/
    printf("A quoi voulez vous jouer ? \n 1. Morpion \n 2. Puissance4\n\nMon choix : ");
    scanf("%d",&choix);

/* Rajoute un case au switch*/
    switch(choix)
    {
    case 1 :
        printf("\n Choix 1 : Morpion\n\n");
        morpion();
        break;
    
    case 2 :
        printf("\n Choix 1 : Puissance4\n\n");
        puissance4();
        break;

    }
    return 0;
}

