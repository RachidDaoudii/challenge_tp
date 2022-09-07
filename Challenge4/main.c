#include <stdio.h>
#include <stdlib.h>

int main()
{
    float KM;
    float Mile;
    printf("Donner la distanse Mile : ");
    scanf("%f",&Mile);
    KM = Mile / 1.609;
    printf("KM : %.2f%s",KM,"Mile");
    return 0;
}
