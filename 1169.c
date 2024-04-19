#include <stdio.h>
#include <math.h>

int main()
{
    int casas, teste, cont;
    double result;

    scanf("%i", &teste);

    for(cont=0; cont < teste; cont++)
    {
        scanf("%i", &casas);

        result = pow(2, casas);
        result = trunc(result/12000);
        printf("%.0f kg\n", result);
    }

   

    return 0;
}