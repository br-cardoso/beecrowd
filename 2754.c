#include <stdio.h>

int main(void)
{

    double A1, A2;
    A1 = 234.345;
    A2 = 45.698;

    printf("%.6f - %.6f\n", A1, A2);
    printf("%.0f - %.0f\n", A1, A2);
    printf("%.1f - %.1f\n", A1, A2);
    printf("%.2f - %.2f\n", A1, A2);
    printf("%.3f - %.3f\n", A1, A2);
    printf("%.6e - %.6e\n", A1, A2);
    printf("%.6E - %.6E\n", A1, A2);
    printf("%g - %g\n", A1, A2);
    printf("%G - %G\n", A1, A2);

    return 0;

}