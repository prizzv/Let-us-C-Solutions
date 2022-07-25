#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comp, num, sticks, i,remaining=21;

    for(i=1; i<=21; i= 21 - num - sticks){

        printf("Enter the number of matchsticks you want to pick (1 to 4): ");
        scanf("%d", &sticks);

        remaining = remaining - sticks;

        if(remaining == 5){
            num = 4;
            printf("The computer choose %d sticks\n",num);

        }else if(remaining == 4){
            num=3;
            printf("The computer choose %d sticks\n",num);

        }else if(remaining == 3){
            num = 2;
            printf("The computer choose %d sticks\n",num);

        }else if(remaining == 2){
            num = 1;
            printf("The computer choose %d sticks\n",num);

        }else{
        num = (rand()%4)+1;
        printf("The computer choose %d sticks\n",num);
        }

        remaining = remaining - num;
        printf("%d no of sticks are left\n",remaining);

        if(remaining  <2){
            printf("You Loose\n");
            break;
        }
    }
    return 0;
}
