#include <stdio.h>

int fibo(int num);

int main()
{
    int num = 25, i;

    printf("The first 25 numbers of Fibonacci series are\n");

    for(i=1;i<25;i++){
        printf("%d\t",fibo(i));
    }

    return 0;
}

int fibo(int num){

    if(num==0 || num==1){
        return num;
    }else {
        return (fibo(num-1) + fibo(num-2));
    }
}
