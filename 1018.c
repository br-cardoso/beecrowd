#include <stdio.h>
 
int main() 
{
    int num, auxNum, qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, qtd1;

    scanf("%d", &num);

    qtd100 = num / 100;
    auxNum = num % 100;
    qtd50 = auxNum / 50;
    auxNum = auxNum % 50;
    qtd20 = auxNum / 20;
    auxNum = auxNum % 20;
    qtd10 = auxNum / 10;
    auxNum = auxNum % 10;
    qtd5 = auxNum / 5;
    auxNum = auxNum % 5;
    qtd2 = auxNum / 2;
    auxNum = auxNum % 2;
    qtd1 = auxNum;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", num, qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, qtd1);

    return 0;
}