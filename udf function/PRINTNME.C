#include <stdio.h>
#include <conio.h>
void name(char []);
void main()
{
	char n[10];
	clrscr();
	printf("enter your name::");
	scanf("%s",&n);
	name(n);
	getch();
}
void name(char n[10])
{
	int i,j;
	//char n[10];
	//printf("enter your name::");
	//scanf("%s",&n);
	//printf("\nenter no how many time you want print name::");
	//scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
	printf("\n%s",n);
	}
}