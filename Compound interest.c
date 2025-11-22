//program to input principle,time,and rate(P,T,R) and find compound interest
#include <stdio.h>
#include <math.h>  
main()
{
    double principle, time, rate, compoundInterest, amount;
    printf("Enter Principle amount: ");
    scanf("%lf", &principle);
    printf("Enter Time (in years): ");
    scanf("%lf", &time);
    printf("Enter Rate of Interest: ");
    scanf("%lf", &rate);
    amount = principle * pow((1 + rate / 100), time);
    compoundInterest = amount - principle;
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %0.2f\n", amount);
}
