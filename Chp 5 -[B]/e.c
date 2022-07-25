#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, num=1, temp=1, n=0, sum=0;

    for(i=1; i<=500;i++){

        while(num!=0){
        n=num%10;
        sum = sum + n*n*n;
        num=num/10;

        }
        if(sum==temp){
            printf("%d\n",i);
        }
        sum=0;
        n=0;
        temp=i+1;
        num=i+1;
    }

    return 0;
}
