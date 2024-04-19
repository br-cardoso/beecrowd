#include <stdio.h>
#include <math.h>
 
int main()
{
   int N, i;
   float x, y, z;

   scanf("%d\n",&N);


   for(i = 0; i < N; i++)
   {
     scanf("%f %f",&x,&y);
      
     if (y != 0)
     {
     z = x/y;
     printf("%.1f\n", z);
     }
     else
     printf("divisão impossível");
    }
  
 
    return 0;
}