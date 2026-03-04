#include<stdio.h>
typedef struct 
{
	int rno;
	float per;
}stu;
main()
{
	stu s;
	s.rno=101;
	s.per=89.5;
	printf("roll no:%d\t percentage:%f",s.rno,s.per);
}
