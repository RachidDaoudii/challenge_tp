#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Celsuis,F;
    printf("Donner la celsius : ");
    scanf("%d",&Celsuis);
    F = (Celsuis * 1.8)+32;
    printf("Resultat : %d",F);
    return 0;
}
