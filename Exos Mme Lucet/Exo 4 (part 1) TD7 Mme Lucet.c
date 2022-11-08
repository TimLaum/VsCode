#include <stdio.h>
int main(){
    int tab[5][5],i=0,n=0;
    for (int i = 0; i < 5 ; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(i==0 || i==4){
                n=1;
                tab[i][j] = n;
            }
            else{
                if(j==0 || j==4){
                    n=1;
                    tab[i][j] = n;
                }
                else{
                    n=0;
                    tab[i][j] = n;
                }
            }
            printf("%d",tab[i][j]);

        }
        printf("\n");
    }
}