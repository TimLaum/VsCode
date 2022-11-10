#include <stdio.h>
#include <string.h>
#include "ecriture_fichier.c" //Introduction du fichier pour écrire les données dans clients.csv
#define MAX_BUFFER_SIZE 1000


void lecture_fichier()
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
    while (fgets(str, MAX_BUFFER_SIZE, fp) != NULL) {// Tant que la donnée a afficher n'est pas nulle
        printf("%s", str);
    }
    printf("\n");
    fclose(fp);
}


int main()
{
    // Substitute the full file path
    // for the string file_path
    FILE* fp = fopen("clients.csv", "r");

    if (!fp)
        printf("Can't open file\n");

    else {
        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[1024];

        int row = 0;
        int column = 0;

        while (fgets(buffer,
                     MAX_BUFFER_SIZE, fp)) {
            column = 0;
            row++;

            // To avoid printing of column
            // names in file can be changed
            // according to need
            if (row == 1)
                continue;

            // Splitting the data
            char* value = strtok(buffer, ", ");

            while (value) {
                switch (column) {
                    case 0 :
                        printf("Prenom :");
                        break;
                    case 1 :
                        printf(" Nom :");
                        break;
                    case 2 :
                        printf(" Age :");
                        break;
                    case 3 :
                        printf(" Pays :");
                        break;
                    case 4 :
                        printf(" Departement :");
                        break;
                    case 5 :
                        printf(" Temps de sejour (en jour) :");
                        break;
                    case 6 :
                        printf(" Nombre de membres :");
                        break;
                }
                    printf("%s", value);

                value = strtok(NULL, ", ");
                column++;
            }
            printf("\n");
        }

        // Close the file
        fclose(fp);
    }
    return 0;
}