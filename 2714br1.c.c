#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
 {
    char RA[20];
    int i, p, o, q, r;

    scanf("%i", &q);

    for(o=0; 0<q; o++)
    {   
        scanf("%s", &RA);

        p=0;
        if(!('R' == RA[0]))
            p=1;
        if(!('A' == RA[1]))
            p=1;
        
        for(i=2; i<20;  i++)
        {
            if(!isdigit(RA[i]))
                p=1;

        }
        if(p==1)
        printf("INVALID DATA\n");



    return 0;
}

