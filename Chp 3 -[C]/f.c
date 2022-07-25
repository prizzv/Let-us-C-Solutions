#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age1, age2, age3;

    printf("Enter the ages of Ram, Shyam and Ajay\n");
    scanf("%d %d %d",&age1,&age2,&age3);

    if(age1<age2 && age1<age3){
        printf("Ram is the youngest");
    }else if(age2<age1 && age2<age3){
        printf("Shyam is the youngest");
    }else if(age3<age1 && age3<age2){
        printf("Ajay is the youngest");
    }
    return 0;
}
