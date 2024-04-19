#include <stdio.h>
 
int main() {

    int v, N[10], i;  

    scanf("%i", &v);

    N[0] = v;

    for(i=1; i<10; i++)
    {
        N[i] = N[i-1]*2;
    }

    for(i=0; i<10; i++)
    {
        printf("N[%i] = %i\n", i, N[i]);
    }
 
    return 0;
}