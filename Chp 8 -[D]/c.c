#include <stdio.h>
#include <stdlib.h>

void roman(int num);

int main()
{
    int num;
    printf("Enter a year: ");
    scanf("%d",&num);

    roman(num);

    return 0;
}

void roman(int num)
{
    int i, temp;

    while(num!=0){

    if(num >= 1000){
        temp = num/1000;

        for(i=0; i<temp; i++){
        printf("m");
        }
        num%=1000;

    }else if(num>=500 && num<1000){

        printf("d");
        num -=500;

    }else if(num>=100 && num<500){
        temp = num/100;
        for(i=0; i<temp; i++){
            printf("c");
        }
        num %=100;
    }else if(num>=50 && num<100){

        printf("l");
        num -=50;

    }else if(num>=10 && num<50){
        temp = num/10;
        for(i=0; i<temp; i++){
            printf("x");
        }
        num %=10;

    }else if(num>=5 && num<10){

        printf("v");
        num -=5;

    }else{
        temp=num;
        for(i=0;i<temp; i++){
        printf("i");
        }
        break;
    }
    }
    return;
}
