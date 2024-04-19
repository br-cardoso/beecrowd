#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int result (char, char);
int main() {
 
    char Sinal1[7], Sinal2[7], P1, P2;
    int numCasos, i, resultado;

    scanf("%d\n", &numCasos);

    for(i=0; i < numCasos; i++)
    {
        scanf("%s\n", &Sinal1);
        scanf("%s", &Sinal2);
        P1 = Sinal1[1];
        P2 = Sinal2[1];

        resultado = result (P1, P2);

         if(resultado == 0)
            printf("Sem ganhador\n");
        else
            if( resultado == 1)
                printf("Jogador 1 venceu\n");
            else
                if(resultado == 2)
                    printf("Jogador 2 venceu\n");
                else
                    if(resultado == 3)
                        printf("Ambos venceram\n");
                    else
                        printf("Aniquilacao mutua\n");
        

    }
 
    return 0;
}

int result (char P1, char P2)
{   int V1, V2;
    if(P1 == 't')
        V1 = 3;
    else
        if(P1 == 'e')
        V1 = 2;
        else
            V1 = 1;
    
     if(P2 == 't')
        V2 = 3;
    else
        if(P2 == 'e')
            V2 = 2;
        else
            V2 = 1;

    if(V1 == V2)
        {
            if(V1 == 3)
                return 4;
            else
                if(V1 == 2)
                    return 0;
                else 
                    return 3;
        }
    else
        if(V1 > V2)
            return 1;
        else 
            return 2;

}