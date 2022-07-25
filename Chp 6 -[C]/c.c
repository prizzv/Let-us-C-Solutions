#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, m, fac = 1;
    float sum, total=0;

    for(i=1; i<=7;i++){

        fac = fac*i;
        sum = (float)i/(float)fac;
        total = total + sum;
    }
    printf("%f",total);

    return 0;
}

