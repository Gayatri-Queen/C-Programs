//program to find maximum and minimum of two numbers without using any loop or condition
#include <stdio.h>
#include <stdlib.h> 
main()
{
    int a, b, maximum, minimum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    maximum = (a + b + abs(a - b)) / 2;
    minimum = (a + b - abs(a - b)) / 2;
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);
}
