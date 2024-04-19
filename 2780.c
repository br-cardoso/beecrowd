#include <stdio.h>
 
int main() 
{
 
    int dist, pontos;

    scanf("%d", &dist);

    if(dist <= 800)
      pontos = 1;
    else
       if(dist <= 1400)
          pontos = 2;
        else
          pontos = 3;

    printf("%d\n", pontos);
    return 0;
}