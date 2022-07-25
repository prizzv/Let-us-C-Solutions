#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, p, area;

    printf("Enter the three side of the triangle\n");
    scanf(" %f %f %f", &a, &b, &c);

    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("The area of the triangle is %.2f",area);

    return 0;
}
