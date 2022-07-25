#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0;
    char arr[16];

    printf("Enter a 16 digit Credit Card number\n");
    gets(arr);

    for(i = 0; i<16; i += 2){

        arr[i] -= 48;
        arr[i] *= 2;

        if(arr[i] >= 10){
            arr[i] -= 9;
        }
        sum += arr[i];
    }

    for(i = 1; i<16; i += 2){
        arr[i] -= 48;
        sum += arr[i];
    }

    if(sum%10 == 0){
        printf("\nThe Credit Card number is valid");
    }else{
        printf("\nThe Credit Card number is not valid");
    }



    return 0;
}
