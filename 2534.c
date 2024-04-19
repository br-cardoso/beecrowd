#include <stdio.h>
#include <stdlib.h>

int compQs (const void*, const void*);
int main() 
{
    int N, Q, Qpos[100], Ncase[100];

    while (scanf("%d %d", &N, &Q) != EOF)
    {
        for(int i=0; i < N; i++)
            scanf("%d", &Ncase[i]);

        qsort(Ncase, N, sizeof(int), compQs);

        for(int i=0; i < Q; i++)
        {
            scanf("%d", &Qpos[i]);
            printf("%d\n", Ncase[Qpos[i] - 1]);
        }
    }
    return 0;
}

int compQs (const void*n1, const void*n2)
{
    if(*(int*)n1 > *(int*)n2)
        return -1;
    else if(*(int*)n1 == *(int*)n2)
        return 0;
    else 
        return 1;
}