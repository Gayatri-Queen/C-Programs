//program on void pointer
#include<stdio.h>
main()
{
	void *p;
	int x=2;
	float y=2.4;
	p=&x;
	printf("The x value is %d\n",(int*)p);
	printf("Address of x is %ld\n",p);
	p=&y;
	printf("the y value is %d\n",(float*)p);
	printf("the address of y is %ld\n",p);
}
