//program on arrays using pointers
#include<stdio.h>
main()
{
	int a[5]={3,6,4,7,8};
	int *p,i;
	p=&a[0];
	printf("%ld\t",&a[0]);
	printf("%ld\n",a+1);
	printf("the address are \n");
	for(i=0;i<4;i++)
	printf("%ld\n",a+i);
	printf("the address are \n");
	for(i=0;i<4;i++)
	printf("%ld\n",p+i);
	printf("the values are \n");
	for(i=0;i<4;i++)
	printf("%ld\n",*(a+i));
	printf("the values are \n");
	for(i=0;i<4;i++)
	printf("%ld\n",*(p+i));
}
