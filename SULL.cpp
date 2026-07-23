#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*top=NULL;
void push()
{
	int value;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value:");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=top;
	top=newnode;
	printf("Inserted %d\n",value);
}
void pop()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("stack underflow\n");
		return;
	}
	temp=top;
	printf("Deleted %d\n",top->data);
	top=top->next;
	free(temp);
}
void display()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("Stack is empty\n");
		return;
	}
	temp=top;
	printf("Stack elements are\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
main()
{
	int choice;
	while(1)
	{
		printf("----MENU----\n");
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push(); break;
			case 2:pop(); break;
			case 3:display(); break;
			case 4:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
