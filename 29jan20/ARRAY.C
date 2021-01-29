#include<stdio.h>
#include<conio.h>
void sum(int a[10]);
void max(int a[10]);
void min(int a[10]);
void count(int a[10]);
int main()
{
	int a[10]={11,23,46,77,36,23,34,23,56,38};
	int i;
	clrscr();
	for(i=0;i<10;i++)
	{
	printf("\t%d",a[i]);
	}

	sum(a);
	max(a);
	min(a);
	count(a);
getch();
return 0;
}



void sum(int a[10])
{
	int j,sum=0;
	for(j=0;j<10;j++)
	{
	sum=sum+a[j];
	}
	printf("\nsum of all element=%d",sum);
}

void max(int a[10])
{
	int k,max=0;
	for(k=0;k<10;k++)
	{
	if(max<a[k])
	max=a[k];
	}
	printf("\nlargest number of array=%d",max);
}

void min(int a[10])
{
	int l,min=99;
	for(l=0;l<10;l++)
	{
	if(min>a[l])
	min=a[l];
	}
	printf("\nlowest number of array=%d",min);
}
void count(int a[10])
{
	int g,p=0,s;
	printf("\nenter the number to find occurance::");
	scanf("%d",&g);
	for(s=0;s<10;s++)
	{
	if(a[s]==g)
	p++;
	{
	 }
	}
	printf("%d repeated %d times",g,p);
}
