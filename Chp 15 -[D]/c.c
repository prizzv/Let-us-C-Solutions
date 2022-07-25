#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[50];
    int n, m, i;

    printf("Enter a line\n");
    gets(str1);
    printf("From which position do you want to start extracting: ");
    scanf("%d", &n);

    if(n == 0){
        puts(str1);
    }else{
        printf("How many characters do you want to extract?\n");
        scanf("%d", &m);
        m += n;

        for(i = n - 1; i < m; i++){
            printf("%c", str1[i]);
        }
    }
    return 0;
}
