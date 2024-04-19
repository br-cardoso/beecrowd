#include <stdio.h>
 
int main() 
{
    int A, B, maior, menor, i;
    
    scanf("%d\n %d", &A, &B);
    if(A > B)
    {
        maior = A;
        menor = B;
    }
    else
    {
        maior = B;
        menor = A;
    }

    for(i=menor+1; i < maior; i++)
    {
        if((i%5) == 3 || (i%5)== 2)
            printf("%d\n", i);
    }

 
    return 0;
}