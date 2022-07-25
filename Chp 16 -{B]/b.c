#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50][50], s[50];
    int n, j, i;

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter the names \n");

    for(i = 0; i < n; i++){
        scanf("%s",name[i]);
    }

    for(i=0; i < n; i++){
        for(j =i+1; j<n; j++){
            if(strcmp(name[i],name[j]) > 0){
                strcpy(s,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],s);
            }
        }
    }
    printf("\nThe sorted order of names are:\n");
    for(i = 0; i < n; i++){
        printf("%s\n",name[i]);
    }

    return 0;
}
