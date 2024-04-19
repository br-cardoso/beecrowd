#include <stdio.h>
 
int main() {
 
    int X, Y;

    scanf("%d", &X);

    if (X % 2 ==1)
        Y = X + 1;
    else
        Y = X + 2;

    printf("%d\n", Y);

    return 0;
}