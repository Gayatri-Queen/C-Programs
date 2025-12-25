//program to show that array name is same as address of the first element in the array
#include<stdio.h>
main()
{
	int x[4],i;
	for(i=0;i<4;i++)
	{
		printf("address of x[%d] is %ld\n",i,&x[i]);
	}
	printf("address of array is %ld\n",x);
}
