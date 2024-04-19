#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
    int c, h = 1, Matriz[24], modN, modM;
    unsigned long long N, M;
    double V, Prem;

    scanf("%lf", &V);
    scanf("%llu", &N);
    scanf("%llu", &M);

    for (c = 0; c <= 24; c++)
        {
            Matriz[c] = h;
            h = h + 4;
        }

     while ((V!=0) || (N!=0) || (M!=0))
     {
         Prem=0;
         modN = N%100;
         modM = M%100;
        if(M%10000 == N%10000)
            Prem = V*3000;
        else
            if(M%1000 == N%1000)
                Prem = V*500;
            else
                if (modM == modN)
                    Prem = V*50;
                else  
                    if ((modN == 00) && (modM == 00))
                        Prem = V *16;
                    else
                    {
                        for (c = 0; c <= 24; c++)
                        {
                            if ((modN >= Matriz[c]) && (modN < Matriz[c+1]))
                            {
                                if (modM >= Matriz[c] && (modM < Matriz[c+1]))
                                    Prem = V *16;
                                else
                                    if (modN >= 97 && modN >= 97 )
                                        Prem = V *16;
                            }
                        }
                    }

        printf("%.2lf\n", Prem);

        scanf("%lf", &V);
        scanf("%llu", &N);
        scanf("%llu", &M);

     } 
     while ((V!=0) || (N!=0) || (M!=0))

    return 0;
}