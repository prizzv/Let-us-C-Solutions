#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, rem[10], temp, count=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;
    for(i=0;i<=10;i++){

        rem[i] = num%8;
        num = num/8;
    }

    while(temp!=0){
        temp=temp/10;
        count++;
    }
        for(i=count; i>=0; i--){

            printf("%d",rem[i]);
        }

    return 0;
}
