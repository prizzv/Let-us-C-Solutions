#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;

    printf("Enter a number: ");
    scanf("%f",&n);

    printf("%.2f", fabs(n));

    return 0;
}
