#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R,C;
    float const pi=3.14;
    printf("donner la rayon : ");
    scanf("%d",&R);
    C = 2*pi*R;
    printf("la circonférence du cercle :%d",C);
    return 0;
}
