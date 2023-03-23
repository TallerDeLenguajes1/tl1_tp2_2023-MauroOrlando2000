// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int i;
    double vt[N];
    
    printf("EL vector es vt=(");
    for(i=0; i<N; i++)
    {
        vt[i]=1 + rand() % 100;
        printf("%f", vt[i]);
        if(i<(N-1))
        {
            printf(", ");
        }
    }
    printf(")");

    return 0;
}