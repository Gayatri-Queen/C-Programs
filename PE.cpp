#include<stdio.h>
#include<ctype.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value)
{
	if(top==MAX-1)
	{
		printf("Stack overflow\n");
		return;
	}
	stack[++top]=value;
}
int pop()
{
	if(top==-1)
	{
		printf("Stack underflow\n");
		return -1;
	}
	return stack[top--];
}
int main()
{
	char postfix[100];
	int i,op1,op2,result;
	printf("Enter postfix expression(single digit operends only):");
	scanf("%s",postfix);
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isdigit(postfix[i]))
		{
			push(postfix[i]-'0');
		}
		else
		{
			op2=pop();
			op1=pop();
			switch(postfix[i])
			{
				case '+':
					result=op1+op2;
					break;
				case '-':
					result=op1-op2;
					break;
				case '*':
					result=op1*op2;
					break;
				case '/':
					result=op1/op2;
					break;
				case '%':
					result=op1%op2;
					break;
				default:
					printf("Invalid operator\n");
					return 0;
			}
			push(result);
		}
	}
	printf("Result of postfix evaluation=%d\n",pop());
}
