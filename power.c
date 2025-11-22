//program to input two numbers from user and find their power
#include <stdio.h>
#include <math.h> 
main()
{
    double base, exponent, result;
    printf("Enter base number: ");
    scanf("%lf", &base);
    printf("Enter exponent number: ");
    scanf("%lf", &exponent);
    result = pow(base, exponent);
    printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, result);
}
