#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p, q, r, n, ans, a;
    int i;

    for(i=0;i<10;i++){

        printf("Enter p, r, n and q respectively\n");
        scanf("%f %f %f %f",&p, &r, &n, &q);

        ans = n*q;
        a=p*pow(1+r/q, ans);

        printf("%.2f\n",a);
    }

    return 0;
}
