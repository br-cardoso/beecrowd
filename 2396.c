#include <stdio.h>
#include <stdlib.h>
typedef struct {int numCar; long int total;}car;
int compQs (const void*, const void*);
int main() 
{
    int N, M;
    long int aux;
    car tempos[100];

    scanf("%d %d\n", &N, &M);

    for(int i=0; i<N; i++)
    {   
        tempos[i].numCar = i +1;
        tempos[i].total = 0;
        for(int j=0; j<M; j++)
        {  
            scanf("%ld", &aux);
            tempos[i].total += aux;
        }
    }

    qsort(tempos, N, sizeof(car), compQs);

    for(int k=0; k<3; k++)
        printf("%d\n", tempos[k].numCar);

    return 0;
}
int compQs (const void*n1, const void*n2)
{
    car *p1 = (car *)n1;
    car *p2 = (car *)n2;

    if(p1->total > p2->total)
        return 1;
    else
        return -1;
}
