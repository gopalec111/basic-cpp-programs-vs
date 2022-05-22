#include<stdio.h>
#include<stdlib.h>
void main()
{
	char i; 
	FILE *fp=NULL;
	fp=fopen("text.txt","w");
	if(fp==NULL)
	{
		printf("file not created\n");
	}
	else
	{
	printf("enter a char\n");
	scanf("%c",&i);
	fprintf(fp,"%c",i);
	fclose(fp);
	}	
 }