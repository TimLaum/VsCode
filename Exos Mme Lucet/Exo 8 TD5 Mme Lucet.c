#include <stdio.h>
#include <stdlib.h>

int lance () {
    int de;
    de = rand () % 6 + 1;
    return de;
}

int joue (int n , int x) {
    int i , occur = 0;
    for ( i = 1 ; i <= n ; i ++ ) {
        if ( lance () == x ) {
            occur ++;
        }
    }
    return occur;
}

void stat (int nb) {
    int i , val;
    float proba;
    for ( i = 1 ; i <= 6 ; i ++ ) {
        val = joue (nb , i);
        proba = val * 1.0 / nb;
        printf ("\nTaux d'apparition de la valeur %d sur %d lances est de : %f" , i , nb , proba);
    }

}

int main () {
    int n;
    printf ("Donnez un nombre de lances : ");
    scanf ("%d" , &n);
    stat (n);

    return 0;
}