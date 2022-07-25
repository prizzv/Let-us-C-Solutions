#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;

    printf("Enter the temperature in franheight");
    scanf("%f", &f);

    c=((f-32)*5)/9;
    printf("%.2f",c);


    return 0;
}
