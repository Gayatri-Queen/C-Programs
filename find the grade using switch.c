//find the grade
#include<stdio.h>
int main()
{
	char grade='C';
	switch(grade)
	{
		case 'A':
			printf("excellent");
			break;
		case 'B':
		    printf("very good");
		    break;
		case 'C':
			printf("good");
		    break;
		case 'F':
		    printf("fail");
		    break;
		default:
			printf("invalid option");
	}
}
