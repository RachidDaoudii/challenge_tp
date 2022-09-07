#include <stdio.h>
#include <stdlib.h>

int main()
{
    int longueur,largeur,res;
    printf("Donner la longueur :");
    scanf("%d",&longueur);
    printf("Donner la largeur :");
    scanf("%d",&largeur);
    res = 2*(longueur + largeur);
    printf("la circonférence d'un rectangle est :%d",res);
    return 0;
}
