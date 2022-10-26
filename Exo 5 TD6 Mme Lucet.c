#include "stdio.h"

int main(){
    int i = 0;
    float val=0.5,tab[1500];

    for(i;i<=1500;i++){
        tab[i] = val;
        val += 0.5;
        printf("\nLa valeur numero %d sera %.1f",i,tab[i]);
        if(val>2.0){
            val = 0.5;
        }
    }
}