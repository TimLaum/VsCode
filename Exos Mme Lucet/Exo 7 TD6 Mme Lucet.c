#include "stdio.h"

int main(){
    int i = 0,nbVal=0;
    float valeur,tab[100];
    printf("\nDonnez le nombre de valeurs que vous voulez entrer : ");
    scanf("%d",&nbVal);
    while(nbVal>100 || nbVal<0){
        printf("\nIl y a une erreur! l'intervalle est [0,100]; Reessayez :  ");
        scanf("%d",&nbVal);
    }
    for(i;i<=nbVal;i++){
        printf("\nDonnez la valeur numero %d : ",i);
        scanf("%f",&valeur);
        tab[i] = valeur;
        printf("La valeur numero %d sera %.1f",i,tab[i]);
        }
}

