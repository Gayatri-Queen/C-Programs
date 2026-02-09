#include <stdio.h>
struct Employee 
{
    int emp_id;
    char emp_name[50];
    float emp_salary;
};
main() 
{
    struct Employee e1, e2, e3;
	printf("Enter details of Employee 1\n");
    printf("ID: ");
    scanf("%d", &e1.emp_id);
    printf("Name: ");
    scanf("%s", e1.emp_name);
    printf("Salary: ");
    scanf("%f", &e1.emp_salary);
    printf("\nEnter details of Employee 2\n");
    printf("ID: ");
    scanf("%d", &e2.emp_id);
    printf("Name: ");
    scanf("%s", e2.emp_name);
    printf("Salary: ");
    scanf("%f", &e2.emp_salary);
    printf("\nEnter details of Employee 3\n");
    printf("ID: ");
    scanf("%d", &e3.emp_id);
    printf("Name: ");
    scanf("%s", e3.emp_name);
    printf("Salary: ");
    scanf("%f", &e3.emp_salary);
    printf("\nEmployee Details\n");
    printf("%d %s %.2f\n", e1.emp_id, e1.emp_name, e1.emp_salary);
    printf("%d %s %.2f\n", e2.emp_id, e2.emp_name, e2.emp_salary);
    printf("%d %s %.2f\n", e3.emp_id, e3.emp_name, e3.emp_salary);
}
