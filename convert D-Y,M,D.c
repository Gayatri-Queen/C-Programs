//complete the c program to convert days into years,months,and days
#include <stdio.h>
main()
{
    int days, years, months;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);
}
