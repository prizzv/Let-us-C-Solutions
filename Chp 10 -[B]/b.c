#include <stdio.h>
#include <stdlib.h>

int factors(int, int );

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are \n",num);
    factors(num,2);

    return 0;
}

int factors(int num, int count){

    if(num == 1){
        return 0;
    }else if (num%count == 0){
        printf("%d\t", count);
        return (factors(num/count, count));
    }else {
        return (factors(num,count+1));
    }
}
