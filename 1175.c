#include <stdio.h>
 
int main() 
{

    int i, v;
    float N[20];


    for(i=0; i<20; i++)
    {   
        scanf("%f", &N[i]);
    }

    v=0;
    
    for(i=19; i >= 0; i--)
    {   
        printf("N[%i] = %.0f\n", v, N[i]);
        v++;
    }
 
    return 0;
}
 