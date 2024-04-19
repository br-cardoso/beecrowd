#include <stdio.h>

unsigned long long int calFat(int);


int main(void)
{
    int n1, n2;
    unsigned long long int result, f1, f2;
    while(scanf("%d %d", &n1, &n2) != EOF)
    {
        f1 = calFat(n1);
        f2 = calFat(n2);
        result = f1 + f2;
        printf("%llu\n", result);
    }  

    return 0;
}
unsigned long long int calFat(int x)
{
    unsigned long long int fatorial = x;
    int i = x-1;
    if(x <= 0)
        return 1;

    while(i>0)
    {
        fatorial = fatorial * i;
        i--;
    }

    return fatorial;
}