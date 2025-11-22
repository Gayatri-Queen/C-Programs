//Program to input length in centimeter and convert it to meter and kilometer
#include <stdio.h>
main()
{
    float cm, meters, kilometers;
    printf("Enter length in centimeters: ");
    scanf("%f", &cm);
    meters = cm / 100.0;        
    kilometers = cm / 100000.0; 
    printf("Length in meters: %.2f m\n", meters);
    printf("Length in kilometers: %.5f km\n", kilometers);
}
