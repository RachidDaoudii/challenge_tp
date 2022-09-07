#include <stdio.h>
#include <stdlib.h>

int main()
{
    int KM;
    float Mile;
    printf("Donner la distanse KM : ");
    scanf("%d",&KM);
    Mile = KM * 1.609;
    printf("Mile : %.2f%s",Mile,"KM");

    return 0;
}
