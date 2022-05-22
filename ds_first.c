#include<stdio.h>
//#include<string.h>
struct student
{
	int roll;
	int marks;
	char name[10];
struct student *next;
};
void add_begin(struct student **ptr);
void display(struct student **ptr);
int i=1;selection;
void main()
{
	struct student *head;
a:
	while(i<10)
	{
	printf("choose:1.add_begin\n2.display");
	scanf("%d",&selection);
	switch(selection)
	{
	case 1:
		{
			add_begin(&head);
			break;
		}
	case 2:
		{
			display(&head);
			goto a;
		}
	default :
		{
			printf("invalid selection\n");
			break;
		}
	}
	i++;
	}
}
void add_begin(struct student **ptr)
{

	struct student *temp=NULL;
	temp=(struct student *)malloc(sizeof(struct student));
	printf("enter student roll.no\n");
	scanf("%d",&temp->roll);
	printf("enter marks of student\n");
	scanf("%d",&temp->marks);
	printf("enter name of student\n");
	scanf("%s",&temp->name);
	temp->next=NULL;

	temp->next=(*ptr);
	(*ptr)=temp;


}
void display(struct student **ptr)
{
	struct student *temp=NULL;
	temp=*ptr;
	if (temp==NULL)
	{
		printf("list is empty");
	}
		while(temp)
		{
			printf("%d\n%d\n%s\n",temp->roll,temp->marks,temp->name);
		temp=temp->next;
		}
}
