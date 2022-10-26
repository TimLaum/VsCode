#include <stdio.h>

void moyenne(int* compt,float* moyenne){
    int i=1;
    float resultat=0,note;
    *moyenne=0;
    while(note != -1){
        printf("\nDonnez la note num\x82ro %d ou annulez en tapant -1 : ",i);
        scanf("%f",&note);
        while(note<0 && note!=-1 || note>20){
            printf("\nNote impossible! Reessayez : ");
            scanf("%f",&note);
        }
        i++;
        if(note!=-1){
            *compt= *compt+1;
        }
        resultat = resultat + note;
    }
    if(*compt==0){
        *moyenne=0;
    }
    else{
        *moyenne = resultat/ *compt;
    }


}

int main()
{   int nbnote=0;
    float moy=0;
    moyenne(&nbnote,&moy);
    printf("La moyenne des %d notes est de : %.2f",nbnote,moy);
}