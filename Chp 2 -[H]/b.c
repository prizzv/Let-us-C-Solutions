#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rev;

    printf("Enter a 5 digit number\n");
    scanf("%d", &num);

    while(num!=0){
        rev=num%10;
        printf("%d",rev);
        num/=10;
    }

    return 0;
}
