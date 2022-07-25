#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks, total = 0;
    int i;

    for(i=1; i<=5; i++){
        printf("Enter the marks of subject %d\n",i);
        scanf("%f", &marks);
        total += marks;
    }

    printf("The student got %.0f aggregate marks.\n",total);

    total = total/5;

    printf("The student got %.2f percentage of marks.\n",total);

    return 0;
}
