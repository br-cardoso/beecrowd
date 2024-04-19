#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compQs (const void*, const void*);
typedef struct {
                char nome[21];
                int gols , pontos, vitorias, entrada;
            }time;

int main() 
{   int T, p1, p2;
    int N, Matchs;
    char n1[21], n2[21];
    time tTimes[100];

    scanf("%d", &T);
    for(int j=0; j<T; j++)
    {   
        scanf("%d %d", &N, &Matchs);

        for(int i = 0; i < N; i++)
        {
            scanf("%s", tTimes[i].nome);
            tTimes[i].entrada = i;
            tTimes[i].gols = 0;
            tTimes[i].pontos = 0;
            tTimes[i].vitorias = 0;
        }    

        for(int k=0; k < Matchs; k++)
        {
            scanf("%d %s %d %s", &p1, n1, &p2, n2);
            
            for (int s = 0; s < N; s++)
            {
                if(strcmp(tTimes[s].nome, n1) == 0)
                {
                    tTimes[s].gols += p1;
                    
                    if (p1 == p2)
                        tTimes[s].pontos ++;
                    else if(p1>p2)
                    {
                        tTimes[s].vitorias++;
                        tTimes[s].pontos += 3;
                    }   
                }
                if(strcmp(tTimes[s].nome, n2) == 0)
                {
                    tTimes[s].gols += p2;
                    if (p1 == p2)
                        tTimes[s].pontos ++;
                    else if(p1<p2)
                    {
                        tTimes[s].vitorias++;
                        tTimes[s].pontos += 3;
                    }
                }
            }
            
        }

        qsort(tTimes, N, sizeof(time), compQs);

        for(int o=N-1; o >= 0; o--)
            printf("%s\n", tTimes[o].nome);
    }
}
int compQs (const void*n1, const void*n2)
{
        time *a, *b;
        a=(time*)n1;
        b=(time*)n2;

        if(a->pontos > b->pontos)
            return 1;
        else if(a->pontos < b->pontos)
            return -1;
        else if(a->vitorias > b->vitorias)
            return 1;
        else if(a->vitorias < b->vitorias)
            return -1;
        else if(a->gols > b->gols)
            return 1;
        else if(a->gols < b->gols)
            return -1;
        else if(a->entrada < b->entrada)
            return 1;
        else
            return -1;
}