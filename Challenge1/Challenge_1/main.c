#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nom[10],Prenom[10],Sexe[8],Tel[13];
    int Age;
    printf("Donner Votre Nom :");
    scanf("%s",&Nom);
    printf("Donner Votre Prenom :");
    scanf("%s",&Prenom);
    printf("Donner Votre Age :");
    scanf("%d",&Age);
    printf("Donner Votre Sexe :");
    scanf("%s",&Sexe);
    printf("Donner Votre Tel :");
    scanf("%s",&Tel);
    printf("Les informations de personne est :\n");
    printf("Nom : %s \n",Nom);
    printf("Prenom : %s \n",Prenom);
    printf("Age : %d \n",Age);
    printf("Sexe : %s \n",Sexe);
    printf("Tel : %s \n",Tel);
    return 0;
}
