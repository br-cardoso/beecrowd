#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
 
    char vert[13], class[9], alim[11];
    int vert1, class1, alim1;

    scanf("%s\n %s\n %s\n", vert, class, alim);

    if(strcmp(vert, "vertebrado") == 0)
        vert1 = 1;
    else 
        vert1 = 2;

    if(strcmp(class, "ave") == 0)
        class1 = 1;
    else
        if (strcmp(class, "mamifero") == 0)
            class1 =2;
        else
            if (strcmp(class, "inseto") == 0)
                class1 = 3;
            else 
                class1 = 4;
    
    if(strcmp(alim, "carnivoro") == 0)
        alim1 = 1;
    else 
        if(strcmp(alim, "onivoro") == 0)
            alim1 = 2;
        else
            if(strcmp(alim, "herbivoro") == 0)
                alim1 = 3;
            else
                alim1 = 4;
    
    if(vert1 ==1)
    {
        if(class1 == 1)
        {
            if (alim1 == 1)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else
        {
            if(alim1 == 2)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
    {
        if(class1 == 3)
        {
            if (alim1 == 4)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            if(alim1 == 4)
                printf("sanguessuga\n");
            else
                printf("minhoca");
        }
    }
    return 0;
}