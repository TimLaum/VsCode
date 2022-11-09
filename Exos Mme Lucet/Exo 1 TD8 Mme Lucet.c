#include "stdio.h"
#define N 18


struct joueur{
    int license,taille;
    char nom[20],prenom[20],date_nais[20],nationalite[20],poste[20],genre[20];
};

struct assos{
    int nb_joueur;
};

struct equipe{
    char nom[20],joueurs[200];
    int p_marque,p_encaisse,points;
};



int main(){
    struct joueur j1;
    struct assos a;
    a.nb_joueur = N;
    j1.taille = 180;
    printf("%d",a.nb_joueur);
}