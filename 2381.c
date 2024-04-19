#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int compQs (const void*, const void*);
typedef struct{ char nome[20];} lista;
int main() 
{
   int N, K, i;
   lista nomes[100];

   scanf("%d %d", &N, &K);

    for(i=0; i < N; i++)
        fgets(nomes[i].nome, 20, stdin);
    
    qsort(nomes, N, 20 * sizeof(char), compQs);

    printf("%s\n", nomes[K-1].nome);
    return 0;
}

int compQs (const void*p1, const void*p2)
{
    return strcmp((char*)p2,(char*)p1);
}