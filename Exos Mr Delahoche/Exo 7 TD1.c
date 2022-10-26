#include <stdio.h>

int somme(int nb){
    int i,resultat=0;
    for(i=1;i<=nb;i++){
        resultat = resultat + i;
    }
    return resultat;
}


int main()
{
    int nombre;
    printf("Jusqu'à quel nombre voulez-vous additionner ? ");
    scanf("%d",&nombre);
    printf("%d",somme(nombre));
}