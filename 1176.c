#include <stdio.h>
 
int main() 
{ 
    int i, cont;
    long long int result, N, T, p1, p2;
    scanf("%lld", &T);
    
    for(i=0; i < T;i++)
    {
        p1 = 0;
        p2 = 1;
        cont = 0;
        scanf("%lld", &N);
        while (cont < N)
        {
            result = p2 + p1;
            p2 = p1;
            p1 = result;
            cont ++;
        }
        printf("Fib(%d) = %lld\n", cont, p1);

    }

    
    return 0;
}