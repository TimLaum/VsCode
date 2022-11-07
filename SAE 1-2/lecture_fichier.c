#include <stdio.h>
#include "ecriture_fichier.c"
#define MAX_BUFFER_SIZE 1000


int main()
{
    FILE * fp;

    fp = fopen("clients.csv", "r");
    while(fp == NULL)
    {
        printf("Erreur fichier vide\n");
        ecriture();
        fp = fopen("clients.csv", "r");
    }

    char str[MAX_BUFFER_SIZE];
    while (fgets(str, MAX_BUFFER_SIZE, fp) != NULL)
        printf("%s", str);
    printf("\n");
    fclose(fp);
    return 0;
}