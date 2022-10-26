#include <stdio.h>
int Minutes(int heure,int minute){
    int resultat;
    resultat = 60 * heure + minute;
    return resultat;
}

void HeuresMinutes(int duree,int *nbH,int *nbM){
    *nbH=0;
    while(duree != 0){
        if(duree >= 60){
            *nbH += 1;
            duree -= 60;
        }
        else{
            *nbM = duree;
            duree -= duree;
        }
    }
}

void AjouteTemps(int H1,int M1,int H2,int M2,int *RH,int *RM){
    int temps1,temps2,cumul;
    temps1 = Minutes(H1,M1);
    temps2 = Minutes(H2,M2);
    cumul = temps1 + temps2;
    HeuresMinutes(cumul,&*RH,&*RM);
}

int main(){
    int heure1,heure2,minutes1,minutes2,M,H;
    printf("Donnez les horaires a additionner :\n");
    scanf("%d %d %d %d",&heure1,&minutes1,&heure2,&minutes2);
    AjouteTemps(heure1,minutes1,heure2,minutes2,&H,&M);
    printf("Cela fait %d H %d min",H,M);
}