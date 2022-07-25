#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, mod;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year%4==0 && (year%400==0 || year%100!=0)){
        printf("The year is a leap year");
    }else {
        printf("The year is not a leap year");
    }

    return 0;
}
