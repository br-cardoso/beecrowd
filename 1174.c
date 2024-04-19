#include <stdio.h>
 
int main() {

    double v, N[100];
    int i, j;  

    j = 0;

    for(i=0; i<100; i++)
    {   
        scanf("%lf", &v);

        if(v <= 10)
        {
            printf("A[%i] = %.1lf\n", i, v);            
        }
    }

 
    return 0;
}