#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleaCharactere() {
    int i;
    char alea;
    srand((unsigned int) time(NULL));
    for(i = 0; i < 3; i++) {
        alea = rand() % 26 + 'a' ;
    }
    return alea;
}

void Tableau(){
    int i=0,j=0;
    char tab[10][20],aleatoire;
    for (int i = 0; i < 10 ; ++i) {
        for (int j = 0; j < 20 ; ++j) {
            aleatoire = aleaCharactere();
            tab[i][j] = aleatoire;
        }
        printf("%c",tab[i][j]);
    }
    printf("\n");
}

int main(){
    Tableau();
}