#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
 
int main() 
{
    int numLines, num1, num2, num3, result, cont1;
    char line[14], n1[3], n2 [4], n3[3];
    

    scanf("%i", &numLines);

    for (cont1 = 0; numLines > cont1; cont1++)
    {
       scanf("%s", &line);

       n1[0] = line[2];
       n1[1] = line[3];
       num1 = atoi(n1);

       n2[0] = line[5];
       n2[1] = line[6];
       n2[2] = line[7];
       num2 = atoi(n2);
       
       n3[0] = line[11];
       n3[1] = line[12];
       num3 = atoi(n3);

       result = num1 + num2 + num3;

       printf("%d\n", result);

    }
    return 0;
}