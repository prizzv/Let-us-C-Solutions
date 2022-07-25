#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10], i, num;

    printf("How many elements do you want to enter: ");
    scanf("%d",&num);

    for(i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    for(i=num-1; i>=0; i--){
        printf("%d\t",arr[i]);
    }

    return 0;
}
