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

        while (fgets(buffer,
                     MAX_BUFFER_SIZE, fp)) {
            column = 0;


            // To avoid printing of column
            // names in file can be changed
            // according to need
            if (row == 1)
                continue;

            // Splitting the data
            char* value = strtok(buffer, ", ");

            while (value) {
                // Column 1
                if (column == 0) {
                    printf("Name :");
                }

                // Column 2
                if (column == 1) {
                    printf("\tAccount No. :");
                }

                // Column 3
                if (column == 2) {
                    printf("\tAmount :");
                }

                printf("%s", value);
                value = strtok(NULL, ", ");
                column++;
                row++;
            }

            printf("\n");
        }

        // Close the file
        fclose(fp);
    }
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
        struct Personnes tab[30];

        while (fgets(buffer,
                     MAX_BUFFER_SIZE, fp)) {
            column = 0;


            // To avoid printing of column
            // names in file can be changed
            // according to need

            // Splitting the data
            char* value = strtok(buffer, ", ");
            while (value) {
                switch (column) {
                    case 0 :
                        strcpy(tab[row].forename,value);
                        break;
                    case 1 :
                        strcpy(tab[row].firstname,value);
                        break;
                    case 2 :
                        strcpy(tab[row].age,value);
                        break;
                    case 3 :
                        strcpy(tab[row].country,value);
                        break;
                    case 4 :
                        strcpy(tab[row].departement,value);
                        break;
                    case 5 :
                        strcpy(tab[row].time,value);
                        break;
                    case 6 :
                        strcpy(tab[row].family,value);
                        break;
                }
                value = strtok(NULL, ", ");
                column++;
                row++;
            }
        }

        // Close the file
        fclose(fp);
        lecture_fichier();
    }
    return 0;
}