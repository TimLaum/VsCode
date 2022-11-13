#include <stdio.h>
void ecriture()
{
    FILE * fp = fopen("clients.csv", "a");// définition / création du fichier clients.csv

    char forename[25] = "";
    char firstname[25] = "";
    char age[3] = "";
    char country[50] = "";
    char departement[5] = "";
    char time[3] = "";
    char family[15] = "";
    int i = 1;
    int nombre = 0;

    printf("Donnez le nombre de clients a enregistrer : ");
    scanf("%d",&nombre);
    while (i<=nombre)//Ecriture des données des clients selon leur nombre
    {
        printf("\nVeuillez saisir le prenom du client numero %d : ",i);
        scanf("%s", &forename);
        printf("\nVeuillez saisir le nom du client numero %d : ",i);
        scanf("%s", &firstname);
        printf("\nVeuillez saisir l'age du client numero %d : ",i);
        scanf("%s", &age);
        printf("\nVeuillez saisir le pays du client numero %d : ",i);
        scanf("%s", &country);
        printf("\nVeuillez saisir le departement du client numero %d : ",i);
        scanf("%s", &departement);
        printf("\nVeuillez saisir le temps de sejour du client numero %d (en jour): ",i);
        scanf("%s", &time);
        printf("\nVeuillez saisir le nombre de membres avec le client numero %d : ",i);
        scanf("%s", &family);
        fprintf(fp, "\n%s,%s,%s,%s,%s,%s,%s;", forename,firstname,age,country,departement,time,family);
        i++;
    }
    fclose(fp);//Fin de l'écriture
}