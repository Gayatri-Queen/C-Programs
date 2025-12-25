//Program on pointer to a pointer
#include<stdio.h>
main()
{
	int x=2;
	int *p,**pp;
	p=&x;
	pp=&p;
	printf("the address of x is %ld\n",&x);
	printf("the value of x is %d\n",x);
	printf("the address of x is %ld\n",p);
	printf("the value of x is %d\n",*p);
	printf("the address of p is %ld\n",pp);
	printf("the value of p is %d\n",*pp);
	printf("the value of x is %d\n",**pp);
}
