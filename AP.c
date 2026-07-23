#include<stdio.h>
int main()
{
	int a[5]={10,90,60,40,50};
	int *p=a;
	printf("current value=%d\n",*p);
	p++;
	printf("after p++=%d\n",*p);
	p+2;
	printf("after p+2=%d\n",*p);
	p--;
	printf("after p--=%d\n",*p);
}
