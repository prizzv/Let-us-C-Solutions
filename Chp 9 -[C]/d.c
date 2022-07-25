#include <stdio.h>
#include <stdlib.h>

void func(int *a, int *b, int *c);

int main()
{
    int x, y, z;

    printf("Enter the values of x, y, z respectively\n");
    scanf("%d %d %d", &x, &y, &z);

    func(&x,&y,&z);

    printf("x = %d\t y = %d\t z = %d\n", x, y, z);

    return 0;
}

void func(int *a, int *b, int *c){

    int t;

    t = *a;
    *a = *c;
    *c = *b;
    *b = t;

    return;
}
