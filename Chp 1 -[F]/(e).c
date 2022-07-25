#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, breadth, radius, pi;

    printf("Enter the length and breadth of a rectangle and the radius of a circle\n");
    scanf("%f %f %f", &length, &breadth, &radius);
    pi = 3.14;
    printf("Area and perimeter of the rectangle are %.2f and %.2f\n", length*breadth, 2*(length+breadth)) ;
    printf("The area and circumference of the circle are %.2f and %.2f\n",pi*radius*radius, 2*pi*radius);

    return 0;
}
