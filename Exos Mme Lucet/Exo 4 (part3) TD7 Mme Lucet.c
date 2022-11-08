#include <stdio.h>
void iniTableau(int L,int C){
    int i=0,n=1,tab[L][C];
    for (int i = 0; i < L ; ++i) {
        for (int j = 0; j < C; ++j) {
            tab[i][j] = n;
            n+=1;
            if(n>1){
                n=0;
            }
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int ligne=5,colonne=5;
    iniTableau(ligne,colonne);
}