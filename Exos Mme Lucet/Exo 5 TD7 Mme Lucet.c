#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char aleaCharactere(){
    int i;
    char alea;
    alea = (rand() % 26) + 97 ;
    return alea;
}

void initialisation(){
    srand(time(NULL));
    int i=0,j=0;
    char tab[10][20];
    for (int i = 0; i < 10 ; ++i) {
        for (int j = 0; j < 20 ; ++j) {
            tab[i][j] =aleaCharactere();
        }
        printf("%c",tab[i][j]);
    }
    printf("\n");
}

int main(){
    initialisation();
}