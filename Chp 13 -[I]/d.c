#include <stdio.h>
#include <stdlib.h>

int modify(int arr[10]);

int main()
{
    int arr[10], i;
    printf("Enter 10 numbers: ");

    for(i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }

    modify(arr);

    for(i=0; i<10; i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}

int modify(int *element){

    int i;

    for(i=0; i<10;i++, element++){
        *element *= 3;
    }
}
