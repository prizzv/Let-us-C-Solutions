#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, arr[10], num;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0; i<num; i++){

        if(arr[i] == arr[num - (i+1)]){
            printf("%d\t",arr[i]);
        }
    }

    printf("\nThese numbers are same.\n");
    return 0;
}
