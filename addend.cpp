#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	int roll;
	int marks;
	char name[10];
struct student *next;
};
void add_end(struct student **ptr);
void display(struct student **ptr);
int i=1;
int selection;
void main()
{
	struct student *head;
	while(i<4)
	{
	printf("choose:1.add_end\n2.display");
	scanf("%d",&selection);
	switch(selection)
	{
	case 1:
		{
			add_end(&head);
			break;
		}
	case 2:
		{
			display(&head);
			break;
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
void add_end(struct student **ptr)
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
}
void display(struct student **ptr)
{
	/*struct student *temp=NULL;
	if(*ptr==NULL)
	{
		*ptr=temp;
		//printf("%d\n%d\n%s\n",temp->roll,temp->marks,temp->name);
		//temp->next=temp;
	}*/
	
			struct student *temp=NULL;
			*ptr=temp;
			struct student *temp2;
		temp2=*ptr;
		while(temp2!='\0')	
		{
			printf("%d\n%d\n%s\n",temp->roll,temp->marks,temp->name);
			temp2=temp2->next;
			temp2->next=temp;
		}
	
}
