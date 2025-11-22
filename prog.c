#include<stdio.h>
int main()
{
	int x;
	float y;
	char c;
	char s[100];
	printf("enter a integer");
	scanf("%d",&x);
	printf("enter floating point number");
	scanf("%f",&y);
	printf("enter a character");
	scanf("\n");
	scanf("%c",&c);
	printf("enter a word");
	scanf("%s",s);
	printf("the integer is %d\n",x);
	printf("the floating point number is %f\n",y);
	printf("the character is %c\n",c);
	printf("the word is %s",s);
}
