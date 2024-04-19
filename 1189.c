#include <stdio.h>
#include <string.h>
 
int main() 
{
    float M[12][12], soma, media;
    int i, j, k, m;
    char Op;

    soma = 0;
    media = 0;

    scanf("%c\n", &Op);

    for(i = 0; i < 12; i++ )
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%f\n", &M[i][j]);
        }
    }
    
    m=0;
    while(m==0)
    {
        for(k = 1; k < 11; k++)
            {
                soma = soma + M[k][m];
            }
        m++;
    }
    while(m==1)
    {
        for(k = 2; k < 10; k++)
            {
                soma = soma + M[k][m];
            }
        m++;
    }
    while(m==2)
    {
        for(k = 3; k < 9; k++)
            {
                soma = soma + M[k][m];
            }
        m++;
    }
    while(m==3)
    {
        for(k = 4; k < 8; k++)
            {
                soma = soma + M[k][m];
            }
        m++;
    }
    while(m==4)
    {
        for(k = 5; k < 7; k++)
            {
                soma = soma + M[k][m];
            }
        m++;
    }

    
    if(Op == 'S')
    {
        printf("%.1f\n", soma);
    }
    else
     {
        media = soma / 30;
        printf("%.1f\n", media);
     }
    

    return 0;
}