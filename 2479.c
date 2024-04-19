#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char* limpaString (char*);
int compQs (const void*, const void*);
int main() 
{
   int N, i, comportados = 0, bagunceiros = 0;
   char nomes[100][22];

   scanf("%d", &N);

    for(i=0; i < N+1; i++)
    {
        fgets(nomes[i], 22, stdin);
        if(nomes[i][0] == '+')
            comportados++;
        else if (nomes[i][0] == '-')
            bagunceiros++;
        if(i == N)
            strcat(nomes[i], "\n");
        limpaString(nomes[i]);
    }

    qsort(nomes, N+1, 22 * sizeof(char), compQs);

    for(i=0; i < N+1; i++)
        printf("%s", nomes[i]);

    printf("Se comportaram: %d | Nao se comportaram: %d\n", comportados, bagunceiros);
    return 0;
}

int compQs (const void*p1, const void*p2)
{
    return strcmp((char*)p1,(char*)p2);
}
char* limpaString (char*name)
{
    for(int i = 0; i < 20; i++)
        name[i] = name[i+2];
    name[20] = '\0';

    return name;
}