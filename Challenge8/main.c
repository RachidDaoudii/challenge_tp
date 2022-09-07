#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,D,Somme,Moyenne;
    printf("Donner Quatre Valeurs :");
    scanf("%d%d%d%d",&A,&B,&C,&D);
    Somme = A+B+C+D;
    Moyenne =(A+B+C+D)/4;
    printf("La somme est : %d \n",Somme);
    printf("La Moyenne est : %d",Moyenne);
    return 0;
}
