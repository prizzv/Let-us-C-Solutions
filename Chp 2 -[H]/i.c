#include <stdio.h>

int main()
{
    int n, temp;

    printf("Enter the amount: ");
    scanf("%d",&n);

    temp = n/100;
    n-= temp*100;
    printf("%d x100 = %d\n",temp , temp*100);

    temp = n/50;
    n-= temp*50;
    printf("%d x50 = %d\n",temp , temp*50);

    temp = n/10;
    n-= temp*10;
    printf("%d x10 = %d\n",temp , temp*10);

    temp =n/5;
    n-= temp*5;
    printf("%d x5 = %d\n",temp , temp*5);

    temp =n/2;
    n-= temp*2;
    printf("%d x2 = %d\n",temp , temp*2);

    temp =n;
    n-= temp;
    printf("%d x1 = %d\n",temp , temp);

    return 0;
}
