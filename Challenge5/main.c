#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C,F;
    printf("donner la température en Fahrenheit : ");
    scanf("%d",&F);
    C = (F-32)/1.8;
    if(C<0)
        printf("Tres Froid");
    else if(C>0 && C<10)
        printf("Froid");
    else if(C>10 && C<30)
        printf("chaud");
    else
        printf("tres chaud");


    return 0;
}
