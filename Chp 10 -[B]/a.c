#include <stdio.h>
#include <stdlib.h>

int digitSum(int num);

int main()
{
    int num, rec;

    printf("Enter a 5 digit number: ");
    scanf("%d",&num);

    rec = digitSum(num);
    printf("The sum of digits of %d is %d\n", num, rec);

    return 0;
}

int digitSum(int num){

    if(num==0){
        return 0;
    }else {
        return (num%10 +digitSum(num/10));
    }
}
