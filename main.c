#include<stdio.h>
#include"Jeux/puissance4.c"
#include"Jeux/morpion.c"
#include"Jeux/JustePrix.c"
#include"message.c"
#include"lire.c"
/* Inclut le .c de ton jeu au dessus*/

int main(){
    int choix=1;

    while (choix!=0){ // Pour revenir au menu a la fin de chaque jeux.
    
    /* Rajoute ton jeu au print*/
        printf("\n---------------------\n");
        printf("A quoi voulez vous jouer ? \n\n 1. Morpion \n 2. Puissance4\n 3. Juste Prix\n\n 4. Envoyer un message \n 5. Lire les messages \n\n 0. STOP \n\nMon choix : ");
        scanf("%d",&choix);

    /* Rajoute un case au switch*/
        switch(choix)
        {
        case 1 :
            printf("\n Choix 1 : Morpion\n\n");
            morpion();
            break;
        
        case 2 :
            printf("\n Choix 2 : Puissance4\n");
            puissance4();
            break;
        
        case 3:
            printf("\n Choix 3 : Juste Prix\n");
            justeprix();
            break;
        
        case 4:
            printf("\n Choix 4 : Envoyer un message\n");
            message();
            break;
        
        case 5:
            printf("\n Choix 5 : Lire les messages\n");
            lire();
            break;
                    


        }
    }
    return 0;
}

