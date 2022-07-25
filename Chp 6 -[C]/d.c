#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, m,n;

    for(i=1;i<=3;i++){

        for(m=1; m<=3; m++){

                for(n=1; n<=3; n++){
                    if(i != m && i != n && m!=n){
                    printf("%d %d %d \n",i,m,n);
                    }
                }
        }

    }

    return 0;
}
