//program on global and local variables
#include<stdio.h>
int x=10;
void display();
main()
{
	int y=20;
	printf("the value of x is %d\n",x);
	printf("the value of y is %d\n",y);
	//printf("the value of z is %d\n")
	display();
}
void display()
{
	int z=30;
	printf("the value of x is %d\n",x);
	//printf("the value of y is %d\n",y)
	printf("the value of z is %d\n",z);
}

