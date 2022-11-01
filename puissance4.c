#include<stdio.h>
#include"puissance4.h"
void initialise(char A[6][7] );
void affiche(char A[6][7]);
int detecte(char joueur, int i, int j, char A[6][7]);
int pose (char joueur, int j, char A[6][7]);
void puissance4 (){     
    int v;
    char j1 = '1';
    char j2 = '2';
    int nbcoup = 0;
    int coupj;
    int coupi;
    char G[6][7];
    initialise(G);
    affiche(G);
    while(nbcoup<=7*6 || v!=1){
        printf("\n joueur 1, ou veux-tu jouer ? : ");
        scanf("%d",&coupj);
        coupi = pose(j1,coupj,G);
        v = detecte(j1, coupi, coupj, G);
        nbcoup +=1 ;
        affiche(G);
        if (v==1){
            printf("\n -------------------- \n\n LE JOUEUR 1 GAGNE ! \n\n -------------------- \n");
            break;
        }
        printf("\n joueur 2, ou veux-tu jouer ? : ");
        scanf("%d",&coupj);
        coupi = pose(j2,coupj,G);
        v = detecte(j2, coupi, coupj, G);
        nbcoup +=1 ;
        affiche(G);
        if (v==1){
            printf("\n -------------------- \n\n LE JOUEUR 2 GAGNE ! \n\n -------------------- \n");
            break;
        }
    }    
    if (v=0){
            printf("\n -------------------- \n\n PERSONNE NE GAGNE ! \n\n -------------------- \n");
      
    }
}

