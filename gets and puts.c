//program to read a string completely from user using gets & puts
#include<stdio.h>
int main()
{
	char name[20];
	printf("enter your name");
	gets(name);
	printf("my name is :\n");
	puts(name);
}

