//program to input principle,time,and rate(P,T,R)from user and find simple interest
#include <stdio.h>
main()
{
    float principal, time, rate, simpleInterest;
    printf("Enter Principle amount: ");
    scanf("%f", &principle);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    simpleInterest = (principle * time * rate) / 100;
    printf("Simple Interest = %0.2f\n", simpleInterest);
}
