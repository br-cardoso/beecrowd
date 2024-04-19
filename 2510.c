#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 
int main() 
{
    int i, j;
    char vilao[26];

    scanf("%d", &j);
    scanf("%s", vilao);
    for(i=0; i<j; i++)
    {
        if((strlen(vilao) > 0) && (strlen(vilao) <= 25))
            printf("Y\n");
        else
            printf("N\n");
    }
    
    return 0;
}