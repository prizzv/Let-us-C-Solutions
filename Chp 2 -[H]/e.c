#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l1, l2, g1, g2, d, pi=3.14, inDegrees=180/pi;

    printf("Enter the latitudes(l1,l2) and the longitudes (g1,g2)\n");
    scanf("%f %f %f %f", &l1, &l2, &g1, &g2);

    d = acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    d=d*inDegrees;
    d=d*3963;
    printf("%.2f",d);


    return 0;
}
