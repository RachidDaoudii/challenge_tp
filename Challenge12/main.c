#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[3];
    printf("donner un nombre :");
    scanf("%s",&nombre);
    printf("inverse est :%c%c%c",nombre[2],nombre[1],nombre[0]);
    return 0;
}
