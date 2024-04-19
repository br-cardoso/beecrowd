#include <stdio.h>
#include <stdlib.h>

int compQs (const void*, const void*);
int main() 
{
    unsigned short N, K, qtdClass;
    int pont[1000];

   scanf("%hu %hu", &N, &K);

    for(int i = 0; i < N; i++)
        scanf("%d", &pont[i]);
    
    qsort(pont, N, sizeof(pont[0]), compQs);

    qtdClass = K;

    for( int j = K - 1; j < N; j++)
    {
        if(pont[j] == pont[j+1])
            qtdClass++;
        else
            break;
    }
    
    printf("%hu\n", qtdClass);

    return 0;
}
int compQs (const void*n1, const void*n2)
{
    if(*(int*)n1 < *(int*)n2)
        return 1;
    else if(*(int*)n1 == *(int*)n2)
        return 0;
    else if(*(int*)n1 > *(int*)n2)
        return -1;
}