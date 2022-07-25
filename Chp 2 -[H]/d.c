#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, s, r, pi = 3.14, inDegree=180/pi;

    printf("Enter the coordinates of x and y\n");
    scanf("%f %f", &x, &y);

    r = sqrt(pow(x,2) + pow(y,2));

    s=(atan(y/x))*inDegree;

    printf("the polar coordinates are(%.2f,%.2f)\n",r,s);

    return 0;
}
