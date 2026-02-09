#include<stdio.h>
union A
{
	int x;
	char y;
};
union B
{
	int arr[10];
	char y;
};
main()
{
	printf("size of A:%ld\n",sizeof(union A));
	printf("size of B:%ld\n",sizeof(union B));
}
