#include<stdio.h>
int main()
{
	int a[3][3],transpose[3][3];
	int r,c,i,j;
	printf("enter number of rows and columns:");
	scanf("%d %d",&r,&c);
	printf("enter elements of the matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("the transpose of the matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}
