#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define C 10
#define L 20


char aleaCharactere(){
    int i;
    char alea;
    alea = (rand() % 26) + 97 ;
    return alea;
}

char verif_a(char T[C][L],int i){
    char verif='F';
    for (int j = 0; j < L; ++j) {
        if(T[i][j]=='a'){
            verif='T';
        }
    }
    return verif;
}



void initialisation(){
    srand(time(NULL));
    int i=0,j=0;
    char tab[C][L],verif_l;
    for (int i = 0; i < C ; ++i) {
        for (int j = 0; j < L ; ++j) {
            tab[i][j] =aleaCharactere();
        }
        verif_l = verif_a(tab,i);
        if(verif_l=='T'){
            printf("\nIl y a bien un a sur la ligne %d",i);
        }
        else{
            printf("\nIl n'y a pas de a dans la ligne %d",i);
        }
    }
    printf("\n");
}



int main(){
    initialisation();
}