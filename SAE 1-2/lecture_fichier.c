#include <stdio.h>
#include <string.h>
#include "ecriture_fichier.c" //Introduction du fichier pour écrire les données dans clients.csv
#define MAX_BUFFER_SIZE 1000
typedef struct  Personnes Individu;
struct Personnes{
    char forename[25],firstname[25],age[3],country[50],departement[5],time[3],family[15];
};


void lecture_fichier(){
    FILE * fp;
    fp = fopen("clients.csv", "r");
    if (!fp)
        ecriture();
    else {
        char buffer[MAX_BUFFER_SIZE];

        int row = 0;
        int column = 0;

        while (fgets(buffer,MAX_BUFFER_SIZE, fp)) {
            column = 0;
            char* value = strtok(buffer, ", ");
            row++;
            while (value) {
                    switch(column){
                        case 0 :
                            printf("%d) Prenom :",row);
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
                            printf(" Temps de sejour :");
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
}



int main()
{
    FILE* fp = fopen("clients.csv", "r");
    if (!fp)
        printf("Can't open file\n");
    else {
        lecture_fichier();
    }
    return 0;
}


void createTab(){
    FILE* fp = fopen("clients.csv", "r");
    if (!fp)
        printf("Can't open file\n");
    else {
        char buffer[1024];
        int row = 0;
        int column = 0;
        struct Personnes tab[30];
        while (fgets(buffer, MAX_BUFFER_SIZE, fp)) {
            column = 0;
            char *value = strtok(buffer, ", ");
            while (value) {
                switch (column) {
                    case 0 :
                        strcpy(tab[row].forename, value);
                        break;
                    case 1 :
                        strcpy(tab[row].firstname, value);
                        break;
                    case 2 :
                        strcpy(tab[row].age, value);
                        break;
                    case 3 :
                        strcpy(tab[row].country, value);
                        break;
                    case 4 :
                        strcpy(tab[row].departement, value);
                        break;
                    case 5 :
                        strcpy(tab[row].time, value);
                        break;
                    case 6 :
                        strcpy(tab[row].family, value);
                        break;
                }
                value = strtok(NULL, ", ");
                column++;
                row++;
            }
        }
        fclose(fp);
    }
}