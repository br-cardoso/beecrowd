#include <stdio.h>
#include <string.h>
 
int main() 
{
    char palavra[51];
    strcpy(palavra, "AMO FAZER EXERCICIO NO URI");
    printf("<%s>\n", palavra);
    printf("<%30s>\n", palavra);
    printf("<%.20s>\n", palavra);
    printf("<%-20s>\n", palavra);
    printf("<%-30s>\n", palavra);
    printf("<%.30s>\n", palavra);
    printf("<%30.20s>\n", palavra);
    printf("<%-30.20s>\n", palavra);

   
    return 0;
}