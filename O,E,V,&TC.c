#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the values");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("the answer is %d",j);
}
