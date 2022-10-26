#include "string.h"
#include "stdio.h"

int main() {
    char str[50],*fin;
    int longueur=0;
    printf("\n Entrez la chaîne : ");
    gets(str);
    fin = strrchr(str,' ');
    longueur = strlen(fin);
    printf("\n Le dernier mot de la chaine est a l'index %d et est %s",fin, str[longueur]);
    return 0;
}