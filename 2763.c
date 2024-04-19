#include <stdio.h>
#include <string.h>
 
int main() 
{
   char cpf[15], X[4], Y[4], Z[4], D[3];
   int i;

    scanf("%s", &cpf);

   for(i = 0; i < 14; i++)
   {
        if(i < 3)
        {
          X[i] = cpf[i];
          X[3] ='\0';
        }
        else
          if(i >= 4 && i < 7)
             {
                 Y[i - 4] = cpf[i];
                 Y[3] = '\0';
             }
          else  
             if(i >= 8 && i < 11)
             {
                 Z[i - 8] = cpf[i];
                 Z[3] = '\0';
             }
                else 
                   if(i >= 12 && i < 14)
                      {
                         D[i - 12] = cpf[i];
                         D[2]='\0';
                      }
  }


    printf("%s\n", X);
    printf("%s\n", Y);
    printf("%s\n", Z);
    printf("%s\n", D);
   
    return 0;
}