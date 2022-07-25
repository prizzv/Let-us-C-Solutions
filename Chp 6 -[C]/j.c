#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pop=100000, rate;
    int i;
    for(i=1;i<=10;i++){

    rate = pop*0.1;
    pop += rate;
    printf("In year %d the population is %d\n", i, pop);

    }

    return 0;
}
