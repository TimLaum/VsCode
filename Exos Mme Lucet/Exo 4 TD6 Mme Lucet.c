#include "stdio.h"

int main(){
    int valeur,i = 0,tab[100];
    for(i;i<=100;i++){
        if(i%2==0){
            tab[i] = 1;
        }
        else {
            tab[i] = 0;
        }
        printf("\nLa valeur numero %d sera %d ",i,tab[i]);
    }
}
