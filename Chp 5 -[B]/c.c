#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    c =pow(a,b);
    printf("%d",c);

    return 0;
}
