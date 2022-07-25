#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum=0,i, temp=0;

    printf("Enter a 5 digit number");
    scanf("%d", &num);

    for(i=0; i<5; i++){
            sum= sum +num%10;
            num=num/10;
    printf("%d\n",num);
    }


    return 0;
}
