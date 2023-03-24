#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main()
{
    int i, j, n, mt[N][M], *Punt;
    Punt = mt;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            *Punt = 1 + rand() % 100;
            if(*Punt < 10)
            {
                printf("0%d ", *Punt);
            }
            else
            {
                printf("%d ", *Punt);
            }
            Punt++;
        }
        printf("\n");
    }
    
    return 0;
}