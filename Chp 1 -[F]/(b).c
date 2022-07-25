#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance_km, m, feet, inch, cm;

    printf("Enter the distance in km: ");
    scanf("%d", &distance_km);

    m = distance_km*1000;
    inch =distance_km*39370;
    feet = distance_km*3280.8;
    cm = distance_km*1000000;

    printf("Distance in meters = %d\n",m);
    printf("Distance in feet = %d\n",feet);
    printf("Distance in inch = %d\n",inch);
    printf("Distance in centimeters = %d\n",cm);

    return 0;
}
