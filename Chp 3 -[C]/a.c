#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cp, sp, sold;

    printf("Enter the cost price and the selling price\n");
    scanf("%f %f", &cp, &sp);

    if(cp>sp){
        sold = cp-sp;
        printf("The seller has made %.2f loss\n",sold);
    }else if(sp>cp){
        sold =sp-cp;
        printf("The seller has made %.2f profit\n",sold);
    }

    return 0;
}
