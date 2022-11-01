//Morpion

/* Du mal à détecter une victoire, faudrait essayer juste les possibilités concernant la case jouée
Possibilité de rejouer sur une case deja occupée à corriger (message d'erreur) ,ca retient dans scanf...
IA (photo meilleurs moves)
*/

#include <stdio.h> //printf; scanf
#include "morpion.h"

void morpion() {
    char grille[9]; //grille
    int joueur = 1; //n° du joueur
    int case_jouee;
    int fin = 0;
    int nb_coups = 0;
    init_grille(grille);
    printf("\n Jeu du Morpion. \n Le joueur 1 joue les X, le joueur 2 les O. \n Bon jeu !\n\n");
    while (fin == 0)  {
        case_jouee = jouer_coup((joueur), grille);
        nb_coups++;
        if (nb_coups > 4) {
            fin = victoire(case_jouee, joueur, grille);
        }   
        if (joueur == 1) {
            joueur = 2;
        }
        else {
            joueur = 1;
        }
    }
    if (fin == 1) {
        printf("\n Victoire du joueur 1 !\n");
    }
    if (fin == 2) {
        printf("\n Victoire du joueur 2 !\n");
    }
}

void init_grille(char grille[9]) {
    int case_;
    for (case_ = 0; case_ < 10; case_++) {
        grille[case_] = ' ';
    }
}

void afficher_grille(char grille[9]) { 
    printf("\n");
    int l;
    printf("    1   2   3\n\n");
    for (l = 0; l < 3; l++) { //affiche la grille ligne par ligne
        printf(" %d  %c | %c | %c \n", l + 1, grille[0 + 3 * l],grille[1 + 3 * l],grille[2 + 3 * l]);        
        if (l != 2 ) {
            printf("    ---------\n");
        }
    }
    printf("\n");
    
}

int jouer_coup(int joueur, char grille[9]){
    int ligne_jeu;
    int colonne_jeu;
    int case_jouee;
    printf(" C'est au tour du joueur %d de jouer. \n Voici l'etat de la grille :\n ", joueur);
    afficher_grille(grille);
    printf(" Sur quelle ligne joues-tu ?\n");
    scanf ("%d", &ligne_jeu);
    printf(" Sur quelle colonne joues-tu ?\n");
    scanf ("%d", &colonne_jeu);
    case_jouee = colonne_jeu + 3 * ligne_jeu - 4;
    if (joueur == 1) {
        grille[case_jouee] = 'X';
    }
    else {
        grille[case_jouee] = 'O';
    }
    return case_jouee;
}

int victoire(int case_jouee, int joueur, char grille[9]) {
    int a = (case_jouee / 3) * 3;
    int b = case_jouee % 3;
    if ((grille[0] == grille[4]) && (grille[4] == grille[8])) { //diagonale
        return joueur;
    }
    if ((grille[2] == grille[4]) && (grille[4] == grille[6])) { //diagonale
        return joueur;
    }
    if ((grille[a] == grille[a + 1])  && (grille[a] == grille[a + 2])) { //ligne
        return joueur;
    }
    if ((grille[b] == grille[b + 3]) && (grille[b] == grille[b + 6])) { //colonne
         return joueur;
    }
    return 0;
}