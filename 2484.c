#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() 
{
    char palavra[110];
	unsigned short i, j, T, A, k,m;

	while (scanf("%s", palavra) != EOF)
	{

		T = strlen(palavra);
		A = T;
		k = T;

		for (i = 0; i < T; i++)
		{
			for(m = 0 ; m < i ; m++) 
                printf(" ");
	
			for (j = 0; j < A-1; j++)
				printf("%c ", palavra[j]);

			printf("%c\n",palavra[j]);

			A = --k;
		}
		printf("\n");
	}
    
    return 0;
}