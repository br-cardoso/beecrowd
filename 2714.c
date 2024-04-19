#include <stdio.h>
#include <string.h>
#include <ctype.h>
int erro (char[21]);
int pos (char[21]);
int main(void)
{
    int qtdCasos, cont1, cont2, erroVal;
    char RA[21];

    scanf("%d/n", &qtdCasos);

    for(cont1 = 0; cont1 < qtdCasos; cont1++)
    {
        scanf("%s/n", &RA[21]);
        erroVal = erro(RA);
        printf("%d", erroVal);
        if(erroVal != 0)
            printf("INVALID DATA\n");
        else
        {
            for (cont2 = pos(RA); cont2 < 20; cont2++)
            {   
                if(cont2 == 19)
                    printf("%c\n", RA[cont2]);
                else
                    printf("%c", RA[cont2]);
            }
        }

    }
}

int erro (char RA[21])
{
    int i, p = 0;

    if(!('R' == RA[0]))
            p=1;
    if(!('A' == RA[1]))
        p=1;
    
    for(i=2; i<20;  i++)
    {
        if((isdigit(RA[i])) != 0)
            p=1;
    }
    return p;  
}

int pos (char RA[21])
{
    int k;
    for(k=2; k<20; k++)
    {
        if(RA[k] != '0')
            break;
    }
    return k;
}