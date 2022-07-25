#include <stdio.h>
#include <math.h>

void area(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Enter the three sides of the triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    area(a,b,c);

    return 0;
}


void area(int a, int b, int c){

    float s, ar;

    s = ((float)a+(float)b+(float)c)/2.0;

    ar = sqrt(s*(s-(float)a)*(s-(float)b)*(s-(float)c));

    printf("%f",ar);

    return;
}
