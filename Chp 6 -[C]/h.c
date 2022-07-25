#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    float x, sum=0, frac;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    frac = (x-1)/x;

    for(i=1;i<=7;i++){
        if(i==1){
        sum += pow(frac,i);
        }else{
            sum += (pow(frac,i))/2;
        }
    }

    printf("%f",sum);
    return 0;
}
