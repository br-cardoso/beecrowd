#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() 
{
    char palavra[100];
    int i, j, k;

    scanf("%s", palavra);
    while (palavra != 'EOF')
    {
        k = strlen(palavra);
        for(j = 0; j<k; j++)
        {
            k--;
            for(i=0; i<k; i++)
            {
                if(i == k-1)
                    printf("%c\n", palavra[i]);
                else
                    printf("%c ", palavra[i]);
                
                
            }
        }
        scanf("%s", palavra);
    }
    
    return 0;
}