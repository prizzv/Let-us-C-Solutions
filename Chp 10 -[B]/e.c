#include <stdio.h>
#include <stdlib.h>

int rec(int num);

int main()
{
    int num = 0;

    printf("The Sum of first 25 numbers is %d", rec(num));
    return 0;
}

int rec(int num){

    if(num==26){
        return 0;
    }else {
        return (num + rec(num+1));
    }
}
