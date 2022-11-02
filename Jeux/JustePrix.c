#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void justeprix(){
    srand( time(NULL) ); //Initialise rand
    int choix;
    int nb;
    int i = 1;
    int imax = 10;
    int s = 0;
    nb = rand();
    nb = nb%99;
    do {
        printf("\nDonne moi un nombre entre 0 et 99 : ");
        scanf("%d",&choix);
        if (choix == nb) {
            s = 1;
            break;
        } //Casse le while
        else {
            if (nb > choix){
                printf("C'est plus !\n");
            }
            else {
                printf("C'est moins !\n");
            }
        }
        i += 1;
    } while ((i<imax));

    if (s == 1) {
        printf("Gagne !\n");
    }
    else {
        printf("Dommage perdu ..\n");
    }
}