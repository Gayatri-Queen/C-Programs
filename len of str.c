//program to find the length of the string.
#include<stdio.h>
int main()
{
	char string[100];
	int i,length=0;
	printf("enter a string");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	printf("length of the string is %d\n",length);
}
