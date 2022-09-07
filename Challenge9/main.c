#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X1,X2,Y1,Y2,XY;
    printf("donner la premier point X :");
    scanf("%d%d",&X1,&X2);
    printf("donner le deuxieme point Y :");
    scanf("%d%d",&Y1,&Y2);
    XY = sqrt( pow((X1-Y1),2) + pow((X2-Y2),2));
    printf("X (%d,%d) \n",X1,X2);
    printf("Y (%d,%d) \n",Y1,Y2);
    printf("XY (%d,%d) \n",XY);

    return 0;
}
