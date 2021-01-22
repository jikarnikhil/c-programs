#include<stdio.h>
#include<conio.h>
int prime(int n);
void main()
{
	int n;
	clrscr();
	printf("enter the number to check prime or not::");
	scanf("%d",&n);
	prime(n);
	getch();
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
	c++;
	}
	}
	if(c==2)
	{
	printf("\nthe number is prime");
	}
	else
	{
	printf("\nthe number is not prime");
	}
	return n;
}