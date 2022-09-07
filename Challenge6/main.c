#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C,F;
    printf("Donner la température en Fahrenheit : ");
    scanf("%d",&F);
    C = (F - 32)/1.8;
    printf("Resultat : %d",C);
    return 0;
}
