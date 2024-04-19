#include <stdio.h>
int grupos (int, int);
int main() 
{
    float V, Prem;
    int N, M, modN, modM;
    scanf("%f %d %d", &V, &N, &M);

    while( V != 0 && M != 0 && N != 0)
    {
        if(M%10000 == N%10000)
            Prem = V*3000;
        else
            if(M%1000 == N%1000)
                Prem = V*500;
            else
                if (M%100 == N%100)
                    Prem = V*50;
                else
                    {
                        modN = N%100;
                        modM = M%100;
                        if (grupos(modN, modM) == 1)
                            Prem = V*16;
                        else
                            Prem = 0;
                    }

        scanf("%f %d %d", &V, &N, &M);
    }

    printf("%.2f\n", Prem);
    
 
    return 0;
}

int grupos (int modN, int modM)
{
    int Matriz[24];
    int c, h;
    h = 1;
    for (c = 0; c <= 24; c++)
        {
            Matriz[c] = h;
            h = h + 4;
        }

    if ((modN == 00) && (modM == 00))
        return 1;
    for (c = 0; c <= 24; c++)
        {
            if ((modN >= Matriz[c]) && (modN < Matriz[c+1]))
            {
                if (modM >= Matriz[c] && (modM < Matriz[c+1]))
                    return 1;
                else
                    if (modN >= 97 && modM >= 97 )
                        return 1;
                    else 
                        return 0;
            }
        }    
}