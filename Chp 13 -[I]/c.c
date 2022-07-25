#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, arr[25], *small;

    for(i=0;i<25;i++){
        arr[i] = (rand()%100) + 1;
    }
   small = &arr[0];

    for(i=1; i<25; i++){
        if(*(arr + i) < *small){
            *small = *(arr + i);
        }
    }

    printf("The smallest number is %d\n", *small);

    return 0;
}
