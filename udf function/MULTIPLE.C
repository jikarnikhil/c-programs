#include<stdio.h>
#include<conio.h>
void multiple(int i,int j);
int main()
{
	int i,j;
	clrscr();
	printf("enter the number to find multiple::");
	scanf("%d",&i);
	printf("enter no to find multiple upto::");
	scanf("%d",&j);
	multiple(i,j);

/*	for(n=1;n<=j;n++)
	{
	mul=i*n;
	printf("\n%d",mul);
	}
*/
	getch();
return 0;
}
void multiple(int i,int j)
{
	int n,mul;
	for(n=1;n<=j;n++)
	{
	mul=i*n;
	printf("\n%d",mul);
	}
}