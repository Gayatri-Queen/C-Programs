#include<stdio.h>
#include<string.h>
struct emp
{
	int eid;
	char ename[20];
	float sal;
}e1,e2;
main()
{
	e1.eid=626;
	strcpy(e1.ename,"Gayu");
	e1.sal=85750;
	e2=e1;                                 // emp1 details are copied to emp2
	printf("the emp2 details are:\n");
	printf("%d\t%s\t%.2f\n",e2.eid,e2.ename,e2.sal);
}
