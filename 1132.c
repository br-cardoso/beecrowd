#include <stdio.h>
#include <math.h>
 
int main() 
{
    int num1, num2, sum, maior, menor;
    scanf("%d\n%d", &num1, &num2);
   
    if (num1>num2)
      {
        maior = num1;
        menor = num2;
      }
    else
     {
        maior = num2;
        menor = num1;
     }

    sum = 0;
    while(menor <= maior)
     {
        if(menor%13 != 0)
            {sum = sum + menor;
             menor++;}
        else
        menor++;
     }
    
    
     printf("%d\n", sum);

   
    return 0;
}