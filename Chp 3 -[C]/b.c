#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,mod;

    printf("Enter a number:");
    scanf("%d",&n);

    mod =n%10;

    if(mod==1 || mod==3 || mod==5 || mod ==7 ||mod==9){
        printf("This is an odd number");
    }else if(mod==0 || mod==2 || mod==4 || mod ==6 ||mod==8){
        printf("This is an even number");
    }


    return 0;
}
