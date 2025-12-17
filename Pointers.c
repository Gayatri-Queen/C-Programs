//program on pointers
#include<stdio.h>
main()
{
	int x=2;
	int *p;
	p=&x;
	printf("the address of x is %ld\n",&x);
	printf("the address of x is %ld\n",p);
	printf("the value of x is %d\n",x);
	printf("the value of x is %d\n",*p);
}

