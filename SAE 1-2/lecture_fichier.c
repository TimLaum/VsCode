#include <stdio.h>
#include "ecriture_fichier.c" //Introduction du fichier pour écrire les données dans clients.csv
#define MAX_BUFFER_SIZE 1000


int main()
{
    FILE * fp;

    fp = fopen("clients.csv", "r");
    while(fp == NULL) // Tant que le fichier est vide (pour éviter tout bug a cause d'un fichier vide)
    {
        printf("Erreur fichier vide\n");
        ecriture(); // Appel de la fonction ecriture du fichier ecriture_fichier.c pour remplir clients.csv qui est vide
        fp = fopen("clients.csv", "r"); // réintroduction du fichier cette fois-ci non vide
    }

    char str[MAX_BUFFER_SIZE];// MAX_BUFFER_SIZE pour éviter tout problème de corrélation de charactères
    while (fgets(str, MAX_BUFFER_SIZE, fp) != NULL) // Tant que la donnée a afficher n'est pas nulle
        printf("%s", str);
    printf("\n");
    fclose(fp);
    return 0;
}