#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int i=0;
    double vt[N], *Punt = &vt;
    
    printf("EL vector es vt=(");
    while(i < N)
    {
        *Punt=1 + rand() % 100;
        printf("%f", *Punt);
        if(i<(N-1))
        {
            printf(", ");
        }
        i++;
        Punt++;
    }
    printf(")");

    return 0;
}