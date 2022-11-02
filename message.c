#include<stdio.h>
#include<stdlib.h>
void message(){
    
    FILE*  fichier = NULL;
    fichier = fopen("data.txt", "a");
    char prenom[20];
    char nom[20];
    char message[200];
    int age;

    printf("\n Quel est ton prenom ? ");
    scanf("%s",prenom);
    printf("\n Quel est ton nom ? ");
    scanf("%s",nom);
    printf("\n Quel est ton age ? ");
    scanf("%d",&age);
    printf("\n Quel est ton message ? ");
    scanf(" %[^\n]",message);
    
    printf("%s", message);
    if (fichier != NULL){


        fprintf(fichier, "prenom : %s ; nom : %s ; age : %d ; message : %s \n", prenom, nom, age, message);
        fclose(fichier);
        printf("\n Merci pour ton message !");
    }

    else{
        printf("Impossible d'ouvrir le fichier, probleme interne");
    }
}