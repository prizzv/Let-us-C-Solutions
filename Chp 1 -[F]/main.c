#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bs, da, house_rent, gs;

    printf("Enter basic salary: ");
    scanf("%f", &bs);

    da = 0.4*bs;
    house_rent = 0.2*bs;

    gs = bs + da + house_rent;
    printf("%.2f",gs);

    return 0;
}
