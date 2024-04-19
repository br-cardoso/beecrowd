#include <stdio.h>
#include <math.h>

int main()
{
    float  num1, num2;
    double num3, num4;

    scanf("%f %f\n %lf %lf", &num1, &num2, &num3, &num4);

    printf("A = %f, B = %f\nC = %lf, D = %lf\n", num1, num2, num3, num4);

    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n", num1, num2, num3, num4);

    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n", num1, num2, num3, num4);

    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n", num1, num2, num3, num4);

    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", num1, num2, num3, num4);

    printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n", num1, num2, num3, num4);




    return 0;
}