//Distance travelled by object
#include<stdio.h>
int main()
{
	float u,a,t,d;
	printf("enter initial velocity");
	scanf("%f",&u);
	printf("enter acceleration");
	scanf("%f",&a);
	printf("enter time");
	scanf("%f",&t);
	d=u*t+0.5*a*t*t;
	printf("the distance is %f",d);
}
