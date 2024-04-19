#include <stdio.h>
#include <stdlib.h>

void Cripto (char *s1)
{
    char *cotl1 = "ZENITC", *ctrl2 = "POLARB", s2[20];
    int c = 0, x1, x2;
    
    while (s1[c] != '\0')
    {
        x1 = 0;
        while (cotl1[x1] != '\0' && cotl1[x1] != s1[c])
            x1++;
        if (cotl1[x1] == '\0')
        {
            x2 = 0;
            while (ctrl2[x2] != '\0' && ctrl2[x2] != s1[c])
                x2++;
        }
        if (cotl1[x1] != '\0')
            s2[c] = ctrl2[x1];
        else if (ctrl2[x2] != '\0')
            s2[c] = cotl1[x2];
        else
            s2[c] = s1[c];
        c++;
    }
    s2[c] = '\0';

    printf("%s\n", s2);
}

int main (void)
{   char nome[20] = "BRUNA";
    Cripto(nome);
}