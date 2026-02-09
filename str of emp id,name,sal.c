//create a structure of emp id,emp name,emp salary
#include<stdio.h>
struct employee
{
	int emp_id;
	char emp_name[50];
	float emp_salary;
};
main()
{
	struct employee e;
	printf("enter employee ID:");
	scanf("%d",&e.emp_id);
	printf("enter employee name:");
	scanf("%s",e.emp_name);
	printf("enter employee salary:");
	scanf("%f",&e.emp_salary);
	printf("\n employee details :\n");
	printf("the employee id;%d\n",e.emp_id);
	printf("the employee name:%s\n",e.emp_name);
	printf("the employee salary : %f\n",e.emp_salary);
}
