#include <stdio.h>
#include <string.h>
#define MAX_BUFFER_SIZE 1000
typedef struct Personnes Individu;
struct Personnes {
  char forename[25], firstname[25], age[3], country[50], departement[5],
      time[3], family[15];
};

void ecriture() {
  FILE *fp =
      fopen("clients.csv", "a"); // définition / création du fichier clients.csv

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
  scanf("%d", &nombre);
  while (i <= nombre) // Ecriture des données des clients selon leur nombre
  {
    printf("\nVeuillez saisir le prenom du client numero %d : ", i);
    scanf("%s", &forename);
    printf("\nVeuillez saisir le nom du client numero %d : ", i);
    scanf("%s", &firstname);
    printf("\nVeuillez saisir l'age du client numero %d : ", i);
    scanf("%s", &age);
    printf("\nVeuillez saisir le pays du client numero %d : ", i);
    scanf("%s", &country);
    printf("\nVeuillez saisir le departement du client numero %d : ", i);
    scanf("%s", &departement);
    printf(
        "\nVeuillez saisir le temps de sejour du client numero %d (en jour): ",
        i);
    scanf("%s", &time);
    printf("\nVeuillez saisir le nombre de membres avec le client numero %d : ",
           i);
    scanf("%s", &family);
    fprintf(fp, "\n%s,%s,%s,%s,%s,%s,%s;", forename, firstname, age, country,
            departement, time, family);
    i++;
  }
  fclose(fp); // Fin de l'écriture
}

void lecture_fichier() {
  FILE *fp;
  fp = fopen("clients.csv", "r");
  if (!fp)
    ecriture();
  else {
    char buffer[MAX_BUFFER_SIZE];

    int row = 0;
    int column = 0;

    while (fgets(buffer, MAX_BUFFER_SIZE, fp)) {
      column = 0;
      char *value = strtok(buffer, ", ");
      row++;
      while (value) {
        switch (column) {
        case 0:
          printf("%d) Prenom :", row);
          break;
        case 1:
          printf(" /Nom :");
          break;
        case 2:
          printf(" /Age :");
          break;
        case 3:
          printf(" /Pays :");
          break;
        case 4:
          printf(" /Departement :");
          break;
        case 5:
          printf(" /Temps de sejour :");
          break;
        case 6:
          printf(" /Nombre de membres :");
          break;
        }

        printf("%s", value);

        value = strtok(NULL, ", ");
        column++;
      }
      printf("\n");
    }

    // Close the file
    fclose(fp);
  }
}

void createTab(struct Personnes *tab, int *maxRow) {
  int row = 0;
  int column = 0;
  FILE *fp = fopen("clients.csv", "r");
  if (!fp)
    printf("Can't open file\n");
  else {
    char buffer[MAX_BUFFER_SIZE];
    struct Personnes tab[30];
    while (fgets(buffer, MAX_BUFFER_SIZE, fp)) {
      row++;
      column = 0;
      char *value = strtok(buffer, ", ");

      while (value) {
        switch (column) {
        case 0:
          strcpy(tab[row].forename, value);
          break;
        case 1:
          strcpy(tab[row].firstname, value);
          break;
        case 2:
          strcpy(tab[row].age, value);
          break;
        case 3:
          strcpy(tab[row].country, value);
          break;
        case 4:
          strcpy(tab[row].departement, value);
          break;
        case 5:
          strcpy(tab[row].time, value);
          break;
        case 6:
          strcpy(tab[row].family, value);
          break;
        }
        value = strtok(NULL, ", ");
        column++;
      }
    }
    fclose(fp);
  }
  *maxRow = row;
}

void searchClient() {
  FILE *fp;
  fp = fopen("clients.csv", "r");
  char searchFN[25];
  struct Personnes tab[30];
  int row = 0;
  int rowMax = 0;
  printf("\n Donnez le nom de la personne recherchee :");
  gets(searchFN);
  if (!fp)
    ecriture();
  else {
    createTab(&tab, &rowMax);
    while (row <= rowMax) {
      if (strcmp(searchFN, tab[row].firstname) == 0) {
        printf("%s", tab[row].forename);
        printf("%s", tab[row].firstname);
        printf("%s", tab[row].age);
        printf("%s", tab[row].country);
        printf("%s", tab[row].departement);
        printf("%s", tab[row].time);
        printf("%s", tab[row].family);
        row++;
      } else {
        row++;
      }
    }
  }
  fclose(fp);
}

void retireClient() {
  /* PAS ENCORE FONCTIONNEL JUSTE LA METHODE POUR RENOMMER UN FICHIER*/
  rename("clients.csv", "clients.csv");
}

int main() {
  FILE *fp = fopen("clients.csv", "r");
  if (!fp)
    printf("Can't open file\n");
  else {
    searchClient();
  }
  fclose(fp);
  return 0;
}