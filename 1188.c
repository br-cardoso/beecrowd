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
    
    k = 7;
    while(k==7)
    {
        for(m = 5; m < 7; m++)
            {
                soma = soma + M[k][m];
            }
        k++;
    }
    while(k==8)
    {
        for(m = 4; m < 8; m++)
            {
                soma = soma + M[k][m];
            }
        k++;
    }
    while(k==9)
    {
        for(m= 3; m < 9; m++)
            {
                soma = soma + M[k][m];
            }
        k++;
    }
    while(k==10)
    {
        for(m = 2; m < 10; m++)
            {
                soma = soma + M[k][m];
            }
        k++;
    }
    while(k==11)
    {
        for(m = 1; m < 11; m++)
            {
                soma = soma + M[k][m];
            }
        k++;
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