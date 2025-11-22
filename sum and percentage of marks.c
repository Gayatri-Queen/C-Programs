//program to find sum & percentage of marks
#include<stdio.h>
int main()
{
	int i,marks[6];
	int percentage,sum=0;
	for(i=0;i<6;i++)
	{
		printf("enter sub %d marks",i+1);
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
	}
	percentage=(sum/600.0)*100;
	printf("the total marks:%d\n",sum);
	printf("%d percentage",percentage);
}
