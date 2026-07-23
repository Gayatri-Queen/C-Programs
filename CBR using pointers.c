#include<stdio.h>
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x=2,y=3;
	printf("before swaping x=%d,y=%d\n",x,y);
	swap(&x,&y);
	printf("after swaping x=%d,y=%d",x,y);
}
