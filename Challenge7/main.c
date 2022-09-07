#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    printf("Donner la valeur De A :");
    scanf("%d",&A);
    printf("Donner la valeur De B :");
    scanf("%d",&B);
    printf("A + B = %d \n",A+B);
    printf("A - B = %d \n",A-B);
    printf("A * B = %d \n",A*B);

    if(B==0)
        printf("impossible B = 0");
    else{
        printf("A / B = %d \n",A/B);
        printf("A %% B = %d \n",A%B);
    }





    return 0;
}
