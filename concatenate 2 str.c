//program to concatenate two strings
#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int i,j,length=0;
	printf("enter string 1");
	gets(s1);
	printf("enter string 2");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		length++;
	}
	for(j=0;s2[j]!='\0';j++,length++)
	{
		s1[length]=s2[j];
	}
	s1[length]='\0';
	printf("the concatenated string is %s",s1);
}
