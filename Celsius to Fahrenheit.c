//conversion of celsius to fahrenheit
#include<stdio.h>
int main()
{
	float Ctemp,Ftemp;
	printf("enter temperature in celsius");
	scanf("%f",&Ctemp);
	Ftemp=1.8*Ctemp+32;
	printf("the temp in fahrenheit is%f",Ftemp);
}
