#include "stdio.h"

int main(){
   int valeur,i = 0,tab[100];
   for(i;i<=100;i++){
       printf("\nDonnez une valeur : ");
       scanf("%d",&valeur);
       tab[i] = valeur;
       printf("La valeur numero %d sera %d",i,tab[i]);
   }
}
