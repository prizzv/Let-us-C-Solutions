#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("(a,b,c)\n\n");

    for(a=0; a<=30; a++){
        for(b=0; b<=30; b++){
            for(c=0; c<=30; c++){
                if(a==0 || b==0 || c==0){
                    continue;
                }else if( c*c ==a*a + b*b){
                    printf("(%d,%d,%d)\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
