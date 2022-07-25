#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, x2, x3, y1, y2, y3, s1, s2, s3;

    printf("Enter three points (x,y) \n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    s1 = (y2-y1)/(x2-x1);
    s2 = (y3-y2)/(x3-x2);
    s3 = (y3-y1)/(x3-x1);

    if(s1==s2==s3){
        printf("The three points are collinear");
    }else {
        printf("They are not collinear");
     }

    return 0;
}
