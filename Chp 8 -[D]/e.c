#include <stdio.h>

int prime(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    prime(num);

    return 0;
}

int prime(int num){

    int i;

    for(i = 2;i <= num; i++){
        if(num%i == 0){
            printf("%d\t", i);
            num /=  i;
            i--;
        }
    }
}
