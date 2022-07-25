#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, m, prime, count;

    for(i=1; i<=300; i++){

        if(i==1){
             printf("Number 1 is neither prime nor composite\n");
            continue;
        }
        count=sqrt(i);
        prime=1;

        for(m = 2; m <= count; m++){

            if(i%m== 0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\t",i);
        }
    }
    return 0;
}
