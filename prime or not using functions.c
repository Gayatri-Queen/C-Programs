//program to find the given number is prime or not
#include<stdio.h>
void prime(int);
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	prime(n);
}
void prime(int x)
{
	int i,count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		count=count+1;
	}
	if(count==2)
	printf("%d is a prime",x);
	else
	printf("%d is not a prime",x);
}
