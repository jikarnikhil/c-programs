#include<stdio.h>
#include<conio.h>
void even(int i,int j);
void main()
{
	int i,j;
	clrscr();
	printf("enter the number from which to find even no series::");
	scanf("%d",&i);
	printf("\nenter the number to find even series upto::");
	scanf("%d",&j);
	even(i,j);
getch();
}
void even(int i,int j)
{
	while(i<=j)
	{
	if(i%2==0)
	{
	printf("\n%d",i);
	}
	i++;
	}
}