#include <stdio.h>
#include <stdlib.h>
typedef struct{char nome[20]; int val;}carne;
int compQs (const void*, const void*);
int main() 
{
    int N;
    carne cortes[10];
   
    while( scanf("%d", &N) != EOF)
    {
        for(int i=0; i<N; i++)
            scanf("%s %d", &cortes[i].nome, &cortes[i].val);

        qsort(cortes, N, sizeof(carne), compQs);

        for(int k=0; k<N; k++)
        {
            printf("%s ", cortes[k].nome);
            if(k == N-1)
                printf("\n");
        }
    }
    return 0;
}
int compQs (const void*p1, const void*p2)
{ 
    carne *n1 = (carne *)p1;
    carne *n2 = (carne *)p2;
    if(n1->val > n2->val)
        return 1;
    else
        return -1;
}
