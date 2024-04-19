#include <stdio.h>

int main(void)
{
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");

    for (int n = 0; n < 16 ; n++)
    {
        printf("|     %2d    |   %2o    |       %X       |\n", n, n, n);
    }
    
    printf("---------------------------------------\n");

    return 0;
}
    