#include <stdio.h>
#include <math.h>

void func(int a, int b, int c, int d, int e, float *sum, float *avg, float *stnd);

int main()
{
    int a, b, c, d, e;
    float sum, avg,stnd;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    func(a,b,c,d,e, &sum, &avg, &stnd);

    printf("Sum = %f\n",sum);
    printf("Average = %f\n",avg);
    printf("Standard deviation = %f\n",stnd);

    return 0;
}

void func(int a, int b, int c, int d, int e, float *sum, float *avg, float *stnd)
{

    *sum = a+b+c+d+e;

    *avg = *sum/5.0;

    *stnd = sqrt(((a-*avg)*(a-*avg))+((b-*avg)*(b-*avg))+((c-*avg)*(c-*avg))+((d-*avg)*(d-*avg))+((e-*avg)*(e-*avg))/5.0);

    return;
}
