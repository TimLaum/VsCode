#include <stdio.h>

void moyenne(int* compt,float* moyenne){
    int i=1;
    float resultat=0,note;
    while(note != 0){
        printf("\nDonnez la note n°%d ou annulez en tapant 0 : ",i);
        scanf("%f",&note);
        while(note<0 || note>20){
            printf("\nNote impossible! Réessayez : ");
            scanf("%f",&note);
        }
        i++;
        if(note!=0){
            *compt= *compt+1;
        }
        resultat = resultat + note;
    }
    *moyenne = resultat/ *compt;

}

int main()
{   int nbnote=0;
    float moy=0;
    moyenne(&nbnote,&moy);
    printf("La moyenne des %d notes est de : %.2f",nbnote,moy);
}