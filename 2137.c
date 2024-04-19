#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int compQs (const void*, const void*);
int main() 
{
    int nCasos, i, n[1000];

    while (scanf("%d", &nCasos) != EOF)
    {
        for(i=0; i < nCasos; i++)
            scanf("%d", &n[i]);

        qsort(n, nCasos, sizeof(int), compQs);

        for(i=0; i < nCasos; i++)
            printf("%04d\n", n[i]);
    }
    return 0;
}


int compQs (const void*n1, const void*n2)
{
    if(*(int*)n1 > *(int*)n2)
        return 1;
    else if(*(int*)n1 == *(int*)n2)
        return 0;
    else if(*(int*)n1 < *(int*)n2)
        return -1;
}