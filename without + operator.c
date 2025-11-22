//program to find sum of two integers without using the '+' operator
#include<stdio.h>
main()
{
    int a, b;
    printf("Enter two integers:a,b");
    scanf("%d %d", &a, &b);
    while (b != 0);
    int carry = a & b; 
    a = a ^ b;          
    b = carry << 1;    
    printf("Sum = %d\n", a);
}
