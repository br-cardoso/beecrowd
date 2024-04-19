#include <stdio.h>
int main()
{
    int x[10], v, i=0;

    for ( v = 0; v < 10; v++)
    {
        scanf("%d", &x[v]); 

        if (x[v] > 0)
        {
             printf("X[%d] = %d\n", i++, x[v]);
        }
        else    
        {
           printf("X[%d] = 1\n", i++);
        }
    }
    return 0;
}