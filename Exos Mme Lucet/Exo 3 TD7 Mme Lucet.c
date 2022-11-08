#include <stdio.h>
int main(){
    int tab[5][10],i=0,n=0;
    for (int i = 0; i < 5 ; ++i) {
        for (int j = 0; j < 10; ++j) {

            tab[i][j] = n;
            n+=1;
            printf("%d",tab[i][j]);
        }
        n=0;
        printf("\n");

    }
}