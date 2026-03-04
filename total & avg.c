#include<stdio.h>
struct student
{
	int rno;
	int marks1,marks2,marks3;
	float total,average;
};
main()
{
	int n,i;
	printf("enter number of students:\n");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("enter student %d rno and 3 sub marks:\n",i+1);
		scanf("%d %d %d %d",&s[i].rno,&s[i].marks1,&s[i].marks2,&s[i].marks3);
		s[i].total=s[i].marks1+s[i].marks2+s[i].marks3;
		s[i].average=s[i].total/3.0;
	}
	printf("the student total and average are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%0.2f\t%0.2f\n",s[i].rno,s[i].total,s[i].average);
	}
}
