#include <stdio.h>
#include <stdlib.h>

int compQs (const void*, const void*);
int compPeso (long int*, int);
int main() 
{
    int N, SN;
    long int caixas[10000];

    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
        scanf("%ld", &caixas[i]);
    
    qsort(caixas, N+1, sizeof(long int), compQs);

    SN = compPeso(caixas, N);
    if(SN != 0)
        printf("N\n");
    else
    printf("S\n");

    return 0;
}

int compQs (const void*n1, const void*n2)
{
    if(*(int*)n1 > *(int*)n2)
        return 1;
    else if(*(int*)n1 == *(int*)n2)
        return 0;
    else
        return -1;
}
int compPeso (long int* caixas, int N)
{   
    int p = 0;
    for(int j = 1; j <= N; j++)
    {
        if((caixas[j] - caixas[j-1]) > 8)
        {
            p ++;
            break;
        }
    }
    return p;
}