#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main()
{
    int i, j, *Punt;
    int mt[N][M];
    Punt = &mt[0][0];

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            *(*(Punt + i) + j) = 1 + rand() % 100;
            printf("%lf ", *Punt);
        }
        printf("\n");
    }

    return 0;
}