#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    float x, i;
    printf("i\ty\tx\n\n");
    for(x=5.5 ;x<=12.5 ;x+=0.5){
        for(y=1;y<=6;y++){
            i=2+y+0.5*x;

            printf("%.2f\t%d\t%.2f\n",i,y,x);
        }
    }



    return 0;
}
