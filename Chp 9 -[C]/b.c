#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sub1, sub2, sub3;
    float avg, percent;

    printf("Enter the marks of 3 subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    func(sub1, sub2, sub3, &avg, &percent);

    printf("Average = %.2f\n", avg);
    printf("Percentage = %.2f\n", percent);

    return 0;
}

void func(int sub1, int sub2, int sub3, float *avg, float *percent)
{
    *avg = (sub1 + sub2 + sub3)/3;

    *percent = (sub1 + sub2 + sub3)/3;

    return;
}
